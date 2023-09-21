# execute clang-format at src with multi-threading

import os
import subprocess
import multiprocessing
import re


def format_file(file):
    # with open(file, "rb") as f:
    # content = f.read()
    # content = re.sub(
    #     rb"(?<![0-9]|[a-z]|[A-Z]|-|_|:)uint8_t(?![0-9]|[a-z]|[A-Z]|-|_|::)", b"uchar", content)
    # with open(file, "wb") as f:
    #     f.write(content)
    print("formatting {0}".format(file))
    subprocess.run(["clang-format", "-i", file])


def format_all():
    print("formatting")
    pool = multiprocessing.Pool(
        processes=max(multiprocessing.cpu_count()-2, 1))
    for root, dirs, files in os.walk("./src"):
        for file in files:
            if file.endswith(".h") or file.endswith(".cpp"):
                pool.apply_async(format_file, (os.path.join(root, file),))
    pool.close()
    pool.join()


if __name__ == "__main__":
    try:
        format_all()
    except Exception as e:
        print(f"An error occurred: {e}")
