import os

headers = []

def find_file(path):
    for root, dirs, files in os.walk(path):
        for file in files:
            if file.endswith(".h"):
                headers.append(os.path.join(root, file))


TEMPLATE = """
#ifndef __INCLUDE_ALL_H__
#define __INCLUDE_ALL_H__

{0}

#endif
"""

if __name__ == "__main__":
    find_file("./src/mc")
    with open("./src/include_all.h", "w") as f:
        f.write(TEMPLATE.format("\n".join(['#include "{0}"'.format(
            header.replace("\\", "/").replace("./src/", "")) for header in headers])))
