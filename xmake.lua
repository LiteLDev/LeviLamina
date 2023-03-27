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
add_requires("gsl v3.1.0")
add_requires("fmt 9.1.0")
add_requires("entt v3.11.1")
add_requires("openssl 1.1.1-t")
add_requires("leveldb 1.23")
add_requires("magic_enum v0.8.2")
add_requires("cpp-httplib v0.12.1")
add_requires("nlohmann_json v3.11.2")
add_requires("mariadb-connector-c 3.3.4")

-- liteldev-repo
add_requires("dyncall 1.4")
add_requires("compact_enc_det v1.0.1")
add_requires("sqlitecpp 3.2.1")
add_requires("fifo_map v1.0.0")
add_requires("pcg_cpp v1.0.0")
add_requires("nbt_cpp v1.0.1")
add_requires("preloader v1.0.3")
add_requires("symbolprovider v1.0.1")

if has_config("localbdslibrary") then
    add_requires("localbdslibrary")
else
    add_requires("bdslibrary 1.19.63.01")
end

target("LiteLoader")
    set_license("LGPL-3")
    set_kind("shared")
    set_languages("c++20")
    set_symbols("debug")
    set_exceptions("none")
    set_pcxxheader("include/llapi/Global.h")
    add_headerfiles("include/(**.h)", "include/(**.hpp)", "include/(**.inl)")
    add_includedirs("./include")
    add_cxflags("/utf-8", "/permissive-", "/EHa", "/W3")
    add_defines(
        "UNICODE", "LITELOADER_EXPORTS", "WIN32_LEAN_AND_MEAN", 
        "CPPHTTPLIB_OPENSSL_SUPPORT", "_AMD64_", "NOMINMAX", 
        "_CRT_SECURE_NO_WARNINGS"
    )
    add_shflags("/DELAYLOAD:bedrock_server.dll")
    add_files("src/**.cpp", "src/**.rc")
    -- xmake-repo
    add_packages("gsl", "fmt", "entt", "leveldb", "magic_enum", "nlohmann_json", "cpp-httplib", "openssl", "mariadb-connector-c")
    -- liteldev-repo
    add_packages("fifo_map", "pcg_cpp", "nbt_cpp", "dyncall", "compact_enc_det", "sqlitecpp", "preloader", "symbolprovider")
    if has_config("localbdslibrary") then
        add_packages("localbdslibrary")
    else
        add_packages("bdslibrary")
    end

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
