# Publishing Your First Pack

First, you should ensure that you have installed [lip](https://github.com/lippkg/lip).

## Creating a Repository

Next, you need to create a GitHub repository to store your pack. You can use any name you like, such as `my-pack`.

In the repository, it is recommended to include a `README.md` file to describe the pack, and a `logo.png` file to serve as the package's icon.

### Creating a tooth.json

Create a `tooth.json` file in the export directory of the pack with the following content:

```json
{
    "format_version": 2,
    "tooth": "github.com/my-github-username/my-pack",
    "version": "0.1.0",
    "info": {
        "name": "MyPack",
        "description": "A great pack!",
        "author": "My Name",
        "tags": [
            "pack"
        ]
    },
    "dependencies": {
        "github.com/LiteLDev/LeviLamina": "1.0.x",
        "github.com/tooth-hub/another-pack": "2.0.x"
    }
}
```

Replace the value of the `tooth` field with the GitHub repository address, replace the value of the `version` field with the version number, and fill in the values of the fields in `info`.

In the `dependencies` section, specify LeviLamina and any other packages to be integrated.

For more information about `tooth.json`, please refer to <https://docs.lippkg.com/reference/tooth_json_file_reference/>.

### Trying to Pack and Install the Pack

Run `lip tooth pack pack.tth`, which will generate a packaged pack file `pack.tth` in the current directory. You can move this pack to a suitable location and try to install it using `lip install pack.tth`.

### Publishing the Pack

Commit the changes to the GitHub repository, then click on `Releases` in the repository on GitHub, click on `Create a new release`, fill in the `Tag version` and `Release title`, and then click `Publish release` to publish the pack. Note that the corresponding tag must be in a format similar to `v0.1.0`, which means adding a `v` prefix to the value of the `version` field in `tooth.json`.

Afterwards, you can install your pack using `lip install github.com/my-github-username/pack-name`. Due to synchronization delays in the version listing, this command may throw an error in the initial period after the release. In such cases, you can specify the version number to install the pack, for example, `lip install github.com/my-github-username/pack-name@0.1.0`.

After some time, you will be able to see your pack in LipUI and on <www.lippkg.com>.
