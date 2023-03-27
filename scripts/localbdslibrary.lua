package("localbdslibrary")
    set_description("use local generated bds library")

    on_load(function (package)
        import("core.project.config")
        import("net.http")

        package:set("installdir", path.join(config.buildir(), "bds"))
        local bedrock_server_api = path.join(package:installdir("lib"), "bedrock_server_api.lib")
        local bedrock_server_var = path.join(package:installdir("lib"), "bedrock_server_var.lib")
        if os.isfile(bedrock_server_api) and os.isfile(bedrock_server_var) then
            print("[localbdslibrary] Local bds library found, skipping generation")
            return
        end
        -- generate lib
        print("[localbdslibrary] Local bds library not found, attempting to generate it...")
        local tools_path = path.join(config.buildir(), "tools", "PeEditor.exe")
        if not os.isfile(tools_path) then
            -- not found, download it
            print("[localbdslibrary] Downloading PeEditor.exe...")
            http.download("https://github.com/LiteLDev/PeEditor/releases/download/v3.1.1/PeEditor.exe", tools_path)
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
