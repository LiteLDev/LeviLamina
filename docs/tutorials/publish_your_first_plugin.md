# Publish Your First Plugin

In the tutorial [Create Your First Plugin](create_your_first_plugin.md), we created a simple plugin. In this tutorial, we will learn how to publish a plugin.

### Prerequisites

First, make sure you have installed [lip](https://github.com/lippkg/lip).

You should also have followed the steps in [Create Your First Plugin](create_your_first_plugin.md) to create a plugin, where the exported plugin directory has a structure similar to the following:

```
.
└── plugin-name
    ├── manifest.json
    ├── plugin-name.dll
    └── plugin-name.pdb
```

Here, `plugin-name` is the name of the plugin.

### Create a GitHub Repository

First, you need to create a GitHub repository to store your plugin. You can use any name you like, such as `plugin-name`.

In the repository, we recommend including a `README.md` file to describe the plugin and a `logo.png` file to serve as the plugin's icon.

### Create a tooth.json

Create a `tooth.json` file in the exported plugin directory with the following content:

```json
{
    "format_version": 2,
    "tooth": "github.com/my-github-username/plugin-name",
    "version": "0.1.0",
    "info": {
        "name": "MyPlugin",
        "description": "MyPlugin is a great plugin!",
        "author": "My Name",
        "source": "github.com/my-github-username/my-source-code",
        "tags": [
            "plugin",
            "ll"
        ]
    },
    "dependencies": {
        "github.com/tooth-hub/another-plugin": "2.0.x"
    },
    "prerequisites": {
        "github.com/LiteLDev/LeviLamina": "1.0.x"
    },
    "files": {
        "place": [
            {
                "src": "plugin-name/*",
                "dest": "plugins/plugin-name"
            }
        ]
    }
}
```

Replace the value of the `tooth` field with the GitHub repository address of your plugin, replace the value of the `version` field with the version number of your plugin, fill in the values of the fields in the `info` section, and fill in the values of the fields in the `dependencies` and `prerequisites` sections.

!!! note
    The `dependencies` section automatically installs the required plugins when installing the plugin and uninstalls them when uninstalling the plugin. However, the `prerequisites` section does not automatically install the required plugins; instead, it throws an error if the dependencies are missing. Generally, the plugins listed in the `prerequisites` section should be fundamental and framework-level packages, such as `github.com/LiteLDev/LeviLamina`, to avoid accidentally uninstalling them during the plugin uninstallation process.

For more information about `tooth.json`, please refer to <https://docs.lippkg.com/reference/tooth_json_file_reference/>.

### Try Packing and Installing the Plugin

In the exported plugin directory, run `lip tooth pack plugin.tth`. This will generate a `plugin.tth` file in the current directory, which is a packaged plugin. You can move this plugin to a suitable location and try installing it using `lip install plugin.tth`.

### Publish the Plugin

Commit your changes to the GitHub repository, then click on "Releases" in the repository on GitHub, click on "Create a new release," fill in the "Tag version" and "Release title" fields, and then click on "Publish release" to publish the plugin. Note that the corresponding tag must be in a format similar to `v0.1.0`, which means it should be the value of the `version` field in `tooth.json` prefixed with a `v`.

You can then install your plugin using `lip install github.com/my-github-username/plugin-name`. Due to synchronization delays in the version listing, this command may throw an error in the initial period after the release. In such cases, you can specify the version number to install the plugin, for example, `lip install github.com/my-github-username/plugin-name@0.1.0`.

After some time, you will also be able to see your plugin in LipUI and <www.lippkg.com>.
