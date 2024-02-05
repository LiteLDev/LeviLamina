import os

TEMPLATE = r"#include <{}>"

def main() -> None:
    header_files = []

    dirs_to_walk = [
        "src/mc",
        "src/ll/api"
    ]
    for dir_to_walk in dirs_to_walk:
        for root, dirs, files in os.walk(dir_to_walk):
            for file in files:
                if file.endswith(".h"):
                    rel_path = os.path.relpath(os.path.join(root, file), "src")
                    include_path = rel_path.replace(os.sep, "/")
                    header_files.append(include_path)

    for header_file in header_files:
        content = TEMPLATE.format(header_file)
        test_file_name = f"src/tests/{header_file.replace('.h', '.cpp')}"
        test_file_dir = os.path.dirname(test_file_name)

        if not os.path.exists(test_file_dir):
            os.makedirs(test_file_dir)

        with open(test_file_name, "w", encoding="utf-8") as f:
            f.write(content)

    with open("xmake.lua", "a", encoding="utf-8") as f:
        f.write("    add_files(\"src/tests/**.cpp\")\n")

if __name__ == "__main__":
    main()
