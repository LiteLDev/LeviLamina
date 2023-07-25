# execute clang-format at src with multi-threading

import os
import subprocess
import multiprocessing


def format_file(file):
    print("formatting {0}".format(file))
    subprocess.run(["clang-format", "-i", file])


def format_all():
    pool = multiprocessing.Pool(
        processes=max(multiprocessing.cpu_count()-2, 1))
    for root, dirs, files in os.walk("./src"):
        for file in files:
            if file.endswith(".h") or file.endswith(".cpp"):
                pool.apply_async(format_file, (os.path.join(root, file),))
    pool.close()
    pool.join()


if __name__ == "__main__":
    format_all()
