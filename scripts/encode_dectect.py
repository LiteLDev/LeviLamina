# execute clang-format at src with multi-threading

import os
import chardet

if __name__ == "__main__":
    for path in ["./src", "./src-server", "./src-client", "./src-test"]:
        for root, dirs, files in os.walk(path):
            for file in files:
                if file.endswith(".h") or file.endswith(".cpp"):
                    with open(os.path.join(root, file), "rb") as f:
                        d = chardet.detect(f.read())
                        if d.get('encoding') != 'ascii' and d.get('encoding') != 'utf-8':
                            print(d, file)
