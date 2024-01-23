import argparse
import re
from typing import TypedDict


class Args(TypedDict):
    tag: str


def main():
    args = get_args()

    version = args["tag"].lstrip("v")

    validate_changelog(version)
    validate_tooth_json(version)

    changelog_current_version_content = get_changelog_current_version_content(version)

    print("## What's Changed:")
    print(changelog_current_version_content)


def get_args() -> Args:
    parser = argparse.ArgumentParser()
    parser.add_argument("--tag", required=True)

    args = parser.parse_args()

    return {
        "tag": args.tag,
    }

def get_changelog_current_version_content(version: str) -> str:
    with open("CHANGELOG.md", "r", encoding="utf-8") as f:
        content = f.read()

    regex = r"## \[{}\] - .*?\n(.*?)## \[".format(version)

    result = re.search(regex, content, re.DOTALL)

    if not result:
        raise Exception("CHANGELOG.md lacks version {}".format(version))
    
    return result.group(1)


def validate_changelog(version: str):
    with open("CHANGELOG.md", "r", encoding="utf-8") as f:
        content = f.read()

    if not re.search(r"## \[{}\]".format(version), content):
        raise Exception("CHANGELOG.md lacks version {}".format(version))

    if not re.search(r"\[{}\]:".format(version), content):
        raise Exception("CHANGELOG.md lacks version link {}".format(version))


def validate_tooth_json(version: str):
    with open("tooth.json", "r", encoding="utf-8") as f:
        content = f.read()

    if not re.search(r"\"version\": \"{}\"".format(version), content):
        raise Exception("tooth.json has wrong version")

    if not re.search(
        r"\"asset_url\": \"https://github.com/LiteLDev/LeviLamina/releases/download/v{}/levilamina-windows-x64.zip\"".format(
            version
        ),
        content,
    ):
        raise Exception("tooth.json has wrong version in asset_url")


if __name__ == "__main__":
    main()
