import os
import shutil

# Get script directory
script_dir = os.path.dirname(os.path.realpath(__file__))

# Calculate source directory
source_dir = os.path.join(script_dir, "..", "src")

# Calculate include directory
include_dir = os.path.join(script_dir, "..", "include")

# Remove include directory
if os.path.exists(include_dir):
    shutil.rmtree(include_dir)

# Create include directory
os.mkdir(include_dir)

# Copy all header files recursively
for root, dirs, files in os.walk(source_dir):
    # Skip the test directory
    if root.startswith(os.path.join(source_dir, "ll", "test")):
        continue

    for file in files:
        if file.endswith(".h"):
            # Calculate source file path
            source_file = os.path.join(root, file)

            # Calculate relative path
            relative_path = os.path.relpath(source_file, source_dir)

            # Calculate include file path
            include_file = os.path.join(include_dir, relative_path)

            # Create include directory
            os.makedirs(os.path.dirname(include_file), exist_ok=True)

            # Copy file
            shutil.copy(source_file, include_file)
