package("localbdslibrary")
    set_description("use local generated bds library")

    on_load(function (package)
        import("core.project.config")
        import("net.http")

        local pe_editor_version = "v3.3.0"

        package:set("installdir", path.join(config.buildir(), "bds"))
        local bedrock_server_api = path.join(package:installdir("lib"), "bedrock_server_api.lib")
        local bedrock_server_var = path.join(package:installdir("lib"), "bedrock_server_var.lib")
        if os.isfile(bedrock_server_api) and os.isfile(bedrock_server_var) then
            print("[localbdslibrary] Local bds library found, skipping generation")
            return
        end
        -- generate lib
        print("[localbdslibrary] Local bds library not found, attempting to generate it...")
        local tools_path = path.join(config.buildir(), "tools", "PeEditor-" .. pe_editor_version .. ".exe")
        if not os.isfile(tools_path) then
            -- not found, download it
            print("[localbdslibrary] Downloading PeEditor.exe...")
            http.download("https://github.com/LiteLDev/PeEditor/releases/download/" .. pe_editor_version .. "/PeEditor.exe", tools_path)
            if not os.isfile(tools_path) then
                raise("[localbdslibrary] Failed to download PeEditor.exe")
            end
            print("[localbdslibrary] PeEditor.exe downloaded successfully")
        end
        print("[localbdslibrary] Running PeEditor.exe to generate local bds library...")
        os.vexec("%s -c -l -o %s", tools_path, package:installdir("lib"))
        if not os.isfile(bedrock_server_api) or not os.isfile(bedrock_server_var) then
            raise("[localbdslibrary] Failed to generate bedrock_server_api.lib or bedrock_server_var.lib")
        end
        print("[localbdslibrary] Local bds library generated successfully")
    end)

    on_fetch(function (package)
        local result = {}
        result.linkdirs = package:installdir("lib")
        result.links = {"bedrock_server_api", "bedrock_server_var"}
        return result
    end)
package_end()


task("bds-lib")
    on_run(function ()
        import("core.base.option")
        local actions = {"remote", "local", "clean", "tool"}
        -- error if multiple actions are specified or no action is specified
        local action = nil
        for _, a in ipairs(actions) do
            if option.get(a) then
                if action then
                    raise("only one action can be specified")
                end
                action = a
            end
        end
        if not action then
            raise("no action specified")
        end
        if action == "remote" then
            print("[localbdslibrary] Using remote BDS library.")
            os.exec("xmake config --localbdslibrary=n")
        elseif action == "local" then
            print("[localbdslibrary] Using local BDS library.")
            os.exec("xmake config --localbdslibrary=y")
        elseif action == "clean" then
            import("core.project.config")
            local lib_dir = path.join(config.buildir(), "bds")
            os.rm(lib_dir)
            print("[localbdslibrary] Local bdslibrary has been cleared.")
        elseif action == "tool" then
            import("core.project.config")
            local tool_dir = path.join(config.buildir(), "tools")
            os.rm(tool_dir)
            print("[localbdslibrary] Toolchain has been cleared.")
        end
    end)

    set_menu {
        usage = "xmake bds-lib",
        description = "Manage local BDS library",
        options = {
            {'r', "remote", "k", nil, "Use remote BDS library"},
            {'l', "local", "k", nil, "Use local BDS library"},
            {'c', "clean", "k", nil, "Clean local BDS library"},
            {'t', "tool", "k", nil, "Remove toolchain"}
        }
    }
task_end()
