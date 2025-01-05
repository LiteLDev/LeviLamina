# Publish your first mod

In the tutorial [Create Your First Mod](create_your_first_mod.md), we created a simple mod. In this tutorial, we will learn how to publish a mod.

### Prerequisites

First, make sure you have installed [lip](https://github.com/futrime/lip).

You should also have followed the steps in [Create Your First Mod](create_your_first_mod.md) to create a mod, where the exported mod directory has a structure similar to the following:

```
.
└── mod-name
    ├── manifest.json
    ├── mod-name.dll
    └── mod-name.pdb
```

Here, `mod-name` is the name of the mod.

### Create a GitHub Repository

First, you need to create a GitHub repository to store your mod. You can use any name you like, such as `mod-name`.

In the repository, we recommend including a `README.md` file to describe the mod and a `logo.png` file to serve as the mod's icon.

### Create a tooth.json

Create a `tooth.json` file in the exported mod directory with the following content:

```json
{
    "format_version": 2,
    "tooth": "github.com/my-github-username/mod-name",
    "version": "0.1.0",
    "info": {
        "name": "MyMod",
        "description": "MyMod is a great mod!",
        "author": "My Name",
        "source": "github.com/my-github-username/my-source-code",
        "tags": [
            "mod",
            "ll"
        ]
    },
    "dependencies": {
        "github.com/tooth-hub/another-mod": "2.0.x"
    },
    "prerequisites": {
        "github.com/LiteLDev/LeviLamina": "1.0.x"
    },
    "files": {
        "place": [
            {
                "src": "mod-name/*",
                "dest": "plugins/mod-name"
            }
        ]
    }
}
```

Replace the value of the `tooth` field with the GitHub repository address of your mod, replace the value of the `version` field with the version number of your mod, fill in the values of the fields in the `info` section, and fill in the values of the fields in the `dependencies` and `prerequisites` sections.

!!! note
    The `dependencies` section automatically installs the required mods when installing the mod and uninstalls them when uninstalling the mod. However, the `prerequisites` section does not automatically install the required mods; instead, it throws an error if the dependencies are missing. Generally, the mods listed in the `prerequisites` section should be fundamental and framework-level packages, such as `github.com/LiteLDev/LeviLamina`, to avoid accidentally uninstalling them during the mod uninstallation process.

For more information about `tooth.json`, please refer to <https://futrime.github.io/lip/reference/tooth_json_file_reference/>.

### Try Packing and Installing the Mod

In the exported mod directory, run `lip tooth pack mod.tth`. This will generate a `mod.tth` file in the current directory, which is a packaged mod. You can move this mod to a suitable location and try installing it using `lip install mod.tth`.

### Publish the Mod

Commit your changes to the GitHub repository, then click on "Releases" in the repository on GitHub, click on "Create a new release," fill in the "Tag version" and "Release title" fields, and then click on "Publish release" to publish the mod. Note that the corresponding tag must be in a format similar to `v0.1.0`, which means it should be the value of the `version` field in `tooth.json` prefixed with a `v`.

You can then install your mod using `lip install github.com/my-github-username/mod-name`. Due to synchronization delays in the version listing, this command may throw an error in the initial period after the release. In such cases, you can specify the version number to install the mod, for example, `lip install github.com/my-github-username/mod-name@0.1.0`.

After some time, you will also be able to see your mod in LipUI and <bedrinth.com>.
