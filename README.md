import face_recognition

# Load the known images
known_image = face_recognition.load_image_file("known_person.jpg")

# Get the face encoding of the known image
known_image_encoding = face_recognition.face_encodings(known_image)[0]

# Load a test image
test_image = face_recognition.load_image_file("test_image.jpg")

# Get the face encoding of the test image
test_image_encoding = face_recognition.face_encodings(test_image)[0]

# Compare faces
results = face_recognition.compare_faces([known_image_encoding], test_image_encoding)

if results[0]:
    print("Unlock the door")
else:
    print("Keep the door locked")
