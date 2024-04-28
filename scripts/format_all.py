# execute clang-format at src with multi-threading

import os
import subprocess
import multiprocessing
import re


def format_file(file):
    print("formatting {0}".format(file))

    with open(file, "r") as f:
        content = f.read()
    with open(file, "w") as f:
        if not content.endswith("\n"):
            content += "\n"
        if file.endswith(".h") and not content.startswith("#pragma once"):
            content = "#pragma once\n" + content
        f.write(content)
        f.close()

    subprocess.run(["clang-format", "-i", file])


def format_all():
    subprocess.run(["clang-format", "--version"])
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
