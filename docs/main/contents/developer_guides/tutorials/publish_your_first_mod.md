# Publish your first mod

In the tutorial [Create Your First Mod](create_your_first_mod.md), we created a simple mod. In this tutorial, we will learn how to publish a mod.

### Prerequisites

First, make sure you have installed [lip](https://lip.levimc.org).

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
  "format_version": 3,
  "format_uuid": "289f771f-2c9a-4d73-9f3f-8492495a924d",
  "tooth": "example.com/my-user/my-mod",
  "version": "0.0.0",
  "info": {
    "name": "My Mod",
    "description": "Description of my mod",
    "tags": [
      "platform:levilamina",
      "type:mod"
    ],
    "avatar_url": "https://example.com/my-mod/avatar.png"
  },
  "variants": [
    {
      "platform": "win-x64",
      "dependencies": {
        "github.com/LiteLDev/LeviLamina": "Required LeviLamina version range"
      },
      "assets": [
        {
          "type": "zip",
          "urls": [
            "https://example.com/my-mod/assets.zip"
          ],
          "placements": [
            {
              "type": "dir",
              "src": "my-mod/",
              "dest": "plugins/my-mod/"
            }
          ]
        }
      ]
    }
  ]
}
```

Replace the value of the `tooth` field with the GitHub repository address of your mod, replace the value of the `version` field with the version number of your mod, fill in the values of the fields in the `info` section, and fill in the values of the fields in the `dependencies` sections.

For more information about `tooth.json`, please refer to <https://lip.levimc.org/user-guide/files/tooth-json/>.

### Try Packing and Installing the Mod

In the exported mod directory, run `lip pack mod.zip`. This will generate a `mod.zip` file in the current directory, which is a packaged mod. You can move this mod to a suitable location and try installing it using `lip install mod.zip`.

### Publish the Mod

Commit your changes to the GitHub repository, then click on "Releases" in the repository on GitHub, click on "Create a new release," fill in the "Tag version" and "Release title" fields, and then click on "Publish release" to publish the mod. Note that the corresponding tag must be in a format similar to `v0.1.0`, which means it should be the value of the `version` field in `tooth.json` prefixed with a `v`.

You can then install your mod using `lip install github.com/my-github-username/mod-name`. Due to synchronization delays in the version listing, this command may throw an error in the initial period after the release. In such cases, you can specify the version number to install the mod, for example, `lip install github.com/my-github-username/mod-name@0.1.0`.

After some time, you will also be able to see your mod in <bedrinth.com>.
