import os
import subprocess
from concurrent.futures import ThreadPoolExecutor
import multiprocessing


def get_all_code_files(directory, extensions):
    """获取指定目录及其子目录下的所有代码文件"""
    code_files = []
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith(extensions):
                code_files.append(os.path.join(root, file))
    return code_files


def format_file(file_path, clang_format_path):
    """使用 clang-format 格式化单个文件"""
    try:
        with open(file_path, "r") as f:
            content = f.read()
        with open(file_path, "w") as f:
            if not content.endswith("\n"):
                content += "\n"
            if file_path.endswith(".h") and not content.startswith("#pragma once"):
                content = "#pragma once\n" + content
            f.write(content)
            f.close()
        subprocess.run([clang_format_path, "-i", file_path], check=True)
        print(f"Formatted: {file_path}")
    except subprocess.CalledProcessError as e:
        print(f"Failed to format {file_path}: {e}")


def format_code_files(
    directory, clang_format_path, extensions=(".cpp", ".c", ".h"), threads=None
):
    """格式化指定目录及其子目录下的所有代码文件"""
    code_files = get_all_code_files(directory, extensions)
    print(f"Found {len(code_files)} files to format.")

    if threads is None:
        threads = multiprocessing.cpu_count()
        print(f"Using {threads} threads (number of CPU cores).")

    with ThreadPoolExecutor(max_workers=threads) as executor:
        executor.map(lambda file: format_file(
            file, clang_format_path), code_files)


if __name__ == "__main__":
    clang_format_path = r"clang-format"

    import time

    print(f"开始 {time.strftime('%Y-%m-%d %H:%M:%S', time.localtime())}")
    format_code_files("./src", clang_format_path)
    format_code_files("./src-server", clang_format_path)
    format_code_files("./src-client", clang_format_path)
    format_code_files("./src-test", clang_format_path)
    print(f"结束 {time.strftime('%Y-%m-%d %H:%M:%S', time.localtime())}")
