import argparse
import re
import subprocess
from typing import TypedDict


class Args(TypedDict):
    tag: str


def main():
    args = get_args()

    version = args["tag"].lstrip("v")

    validate_changelog(version)
    validate_tooth_json(version)


def get_args() -> Args:
    parser = argparse.ArgumentParser()
    parser.add_argument("--tag", required=True)

    args = parser.parse_args()

    return {
        "tag": args.tag,
    }


def validate_changelog(version: str):
    try:
        subprocess.run(
            f"npx changelog --format markdownlint",
            shell=True,
            check=True,
        )
    except subprocess.CalledProcessError as e:
        print("Have you installed it by `npm i -g keep-a-changelog`?")
        raise e

    with open("CHANGELOG.md", "r", encoding="utf-8") as f:
        content = f.read()

    if not re.search(r"## \[{}\]".format(version), content):
        raise Exception("CHANGELOG.md lacks version {}".format(version))


def validate_tooth_json(version: str):
    with open("tooth.json", "r", encoding="utf-8") as f:
        content = f.read()

    if not re.search(r"\"version\": \"{}\"".format(version), content):
        raise Exception("tooth.json has wrong version")

    if not re.search(
        r"\"asset_url\": \"https://github.com/LiteLDev/LeviLamina/releases/download/v{}/levilamina-release-windows-x64.zip\"".format(
            version
        ),
        content,
    ):
        raise Exception("tooth.json has wrong version in asset_url")


if __name__ == "__main__":
    main()
