import os
import subprocess
from concurrent.futures import ThreadPoolExecutor
import multiprocessing
import threading

FILE_COUNT_PER_TASK = 50

# use atomic counter to count the number of files formatted
lock = threading.Lock()
formatted_count = 0
total_count = 0


def finish_count(count):
    """原子计数器，增加格式化文件的数量，返回格式化的文件数量"""
    global formatted_count
    with lock:
        formatted_count += count
        return formatted_count


def get_all_code_files(directory, extensions):
    """获取指定目录及其子目录下的所有代码文件"""
    code_files = []
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith(extensions):
                code_files.append(os.path.join(root, file))
    return code_files


def format_file(file_paths, clang_format_path):
    """使用 clang-format 格式化若干文件"""
    args = [clang_format_path, "-i"]
    for file_path in file_paths:
        args.append(file_path)
    try:
        subprocess.run(args, check=True)
        subprocess.run(args, check=True)
        msg = f"Formatted: {[os.path.basename(file) for file in file_paths]}"
        if len(msg) > 50:
            msg = msg[:50] + "..."
        count = finish_count(len(file_paths))
        print(f"{msg} ({count}/{total_count})")
    except subprocess.CalledProcessError as e:
        print(f"Failed to format {file_paths}: {e}")


def convert_line_endings(input_file, output_file):
    with open(input_file, 'r', encoding='utf-8') as infile:
        content = infile.read()

    # 先将所有 \r\n 替换为 \n（标准化），再统一替换为 \r\n
    content = content.replace('\r\n', '\n').replace('\n', '\r\n')

    with open(output_file, 'w', encoding='utf-8', newline='') as outfile:
        outfile.write(content)


def format_code_files(
    directory, clang_format_path, extensions=(".cpp", ".c", ".h"), threads=None
):
    """格式化指定目录及其子目录下的所有代码文件"""
    global total_count
    code_files = get_all_code_files(directory, extensions)
    total_count = len(code_files)
    print(f"Found {len(code_files)} files to format.")

    if threads is None:
        threads = max(1, multiprocessing.cpu_count() - 2)
        print(f"Using {threads} threads (number of CPU cores).")

    with ThreadPoolExecutor(max_workers=threads) as executor:
        for i in range(0, len(code_files), FILE_COUNT_PER_TASK):
            file_batch = code_files[i: i + FILE_COUNT_PER_TASK]
            executor.submit(format_file, file_batch, clang_format_path)

    with ThreadPoolExecutor(max_workers=threads) as executor:
        for file in code_files:
            executor.submit(convert_line_endings, file, file)


if __name__ == "__main__":
    clang_format_path = r"clang-format"

    import time

    print(f"开始 {time.strftime('%Y-%m-%d %H:%M:%S', time.localtime())}")
    format_code_files("./src", clang_format_path)
    format_code_files("./src-server", clang_format_path)
    format_code_files("./src-client", clang_format_path)
    format_code_files("./src-test", clang_format_path)
    print(f"结束 {time.strftime('%Y-%m-%d %H:%M:%S', time.localtime())}")
