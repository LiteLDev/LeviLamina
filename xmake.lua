add_rules("mode.debug", "mode.release")

includes("scripts/localbdslibrary.lua")

add_repositories("liteldev-repo https://github.com/LiteLDev/xmake-repo.git")

if not has_config("vs_runtime") then
    set_runtimes("MD")
end

option("localbdslibrary")
    set_default(false)
    set_showmenu(true)
    set_description("Use local bdslibrary")
option_end()

-- xmake-repo
add_requires("entt v3.12.2")
add_requires("gsl v4.0.0")
add_requires("leveldb 1.23")
add_requires("rapidjson v1.1.0")

-- ^^^ for mc / for ll vvv

add_requires("fmt 10.1.1")
add_requires("magic_enum v0.9.0")
add_requires("nlohmann_json v3.11.2")
add_requires("gtest 1.12.1")

-- liteldev-repo
add_requires("pcg_cpp v1.0.0")
add_requires("preloader v1.3.0")
add_requires("symbolprovider v1.1.0")
add_requires("ctre 3.8.1")
add_requires("pfr 2.1.1")

if has_config("localbdslibrary") then
    add_requires("localbdslibrary")
else
    add_requires("bdslibrary 1.20.41.02")
end

target("LeviLamina")
    set_license("LGPL-3")
    set_kind("shared")
    set_languages("c++23")
    set_symbols("debug")
    set_exceptions("none")
    set_pcxxheader("src/mc/_HeaderOutputPredefine.h")
    set_configdir("$(buildir)/config")
    add_configfiles("src/(**.in)")
    set_configvar("LL_WORKSPACE_FOLDER", "$(projectdir)")
    add_headerfiles("src/(**.h)")
    add_includedirs("./src", "$(buildir)/config")
    add_cxflags("/utf-8", "/permissive-", "/EHa", "/W4")
    add_defines(
        "UNICODE", "LL_EXPORT", "WIN32_LEAN_AND_MEAN",
        "CPPHTTPLIB_OPENSSL_SUPPORT", "_AMD64_", "NOMINMAX",
        "_CRT_SECURE_NO_WARNINGS"
    )
    add_shflags("/DELAYLOAD:bedrock_server.dll")
    add_files("src/**.cpp","src/**.rc")
    -- xmake-repo
    add_packages("entt", "fmt", "gsl", "gtest", "leveldb", "magic_enum", "nlohmann_json", "rapidjson")
    -- liteldev-repo
    add_packages("pcg_cpp", "preloader", "symbolprovider", "ctre", "pfr")
    if has_config("localbdslibrary") then
        add_packages("localbdslibrary")
    else
        add_packages("bdslibrary")
    end

    on_load(function (target)
        local tag = os.iorun("git describe --tags --abbrev=0 --always")
        local major, minor, patch, suffix = tag:match("v(%d+)%.(%d+)%.(%d+)(.*)")
        if not major then
            print("Failed to parse version tag, using 0.1.0")
            major, minor, patch = 0, 1, 0
        end
        if suffix then
            prerelease = suffix:match("-(.*)")
            if prerelease then
                prerelease = prerelease:gsub("\n", "")
            end
            if prerelease then
                target:set("configvar", "LL_VERSION_PRERELEASE", prerelease)
            end
        end
        target:set("configvar", "LL_VERSION_MAJOR", major)
        target:set("configvar", "LL_VERSION_MINOR", minor)
        target:set("configvar", "LL_VERSION_PATCH", patch)
    end)

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
