add_rules("mode.release", "mode.debug")

add_repositories("liteldev-repo https://github.com/LiteLDev/xmake-repo.git")

-- Dependencies from xmake-repo.
add_requires("ctre 3.8.1")
add_requires("entt 41aab920b083aa424ac1d27666ce287eeaff6ceb") -- master
add_requires("expected-lite v0.7.0")
add_requires("fmt 10.2.1")
add_requires("gsl v4.0.0")
add_requires("leveldb 1.23")
add_requires("magic_enum v0.9.5")
add_requires("nlohmann_json v3.11.3")
add_requires("rapidjson v1.1.0")
add_requires("mimalloc 2.1.2")
add_requires("openssl 1.1.1-w", {configs = {shared = false}})
add_requires("cpp-httplib 0.14.3", {configs = {ssl = true}})

-- Dependencies from liteldev-repo.
add_requires("pcg_cpp v1.0.0")
add_requires("pfr 2.1.1")
add_requires("demangler v17.0.7")
add_requires("preloader v1.9.0")
add_requires("symbolprovider v1.2.0")
add_requires("libhat 2024.4.16")
add_requires("levibuildscript 0.2.0")

if has_config("tests") then
    add_requires("gtest")
end

if is_config("target_type", "server") then
    add_requires("bedrockdata 1.21.3.1-server")
else
    add_requires("bedrockdata 1.21.0.3-client")
    add_requires("imgui v1.91.0-docking", {configs = {dx11 = true, dx12 = true}})
end

option("tests")
    set_default(false)
    set_showmenu(true)
    set_description("Enable tests")

option("use_mimalloc")
    set_default(false)
    set_showmenu(true)
    set_description("Enable mimalloc")

option("target_type")
    set_default("server")
    set_showmenu(true)
    set_values("server", "client")
option_end()

if is_config("target_type", "server") then
    set_defaultarchs("windows|x64")
    set_allowedarchs("windows|x64", "linux|x86_64")
else
    set_defaultarchs("windows|x64")
    set_allowedarchs("windows|x64", "android|arm64-v8a", "iphoneos|arm64")
end

if not has_config("vs_runtime") and is_plat("windows") then
    set_runtimes("MD")
end

target("LeviLamina")
    add_rules("@levibuildscript/linkrule")
    add_rules("@levibuildscript/modpacker")
    set_languages("c++20")
    set_kind("shared")
    set_symbols("debug")
    set_exceptions("none")
    add_files("src/**.cpp")
    set_configdir("$(buildir)/config")
    set_configvar("LL_WORKSPACE_FOLDER", "$(projectdir)")
    add_configfiles("src/(ll/core/Version.h.in)")
    add_headerfiles("src/(ll/api/**.h)", "src/(mc/**.h)")
    add_includedirs("src", "$(buildir)/config")
    set_pcxxheader("src/ll/api/Global.h")
    add_packages("demangler", "mimalloc", "preloader", "cpp-httplib", "libhat")
    add_packages(
        "entt",
        "expected-lite",
        "fmt",
        "gsl",
        "leveldb",
        "magic_enum",
        "nlohmann_json",
        "rapidjson",
        "ctre",
        "pcg_cpp",
        "pfr",
        "symbolprovider",
        "bedrockdata",
        {public = true}
    )
    add_defines(
        "ENTT_PACKED_PAGE=128", -- public = true
        "LL_EXPORT",
        "_HAS_CXX23=1" -- work around to enable c++23
    )

    if is_plat("windows") then
        add_syslinks("Version", "DbgHelp", "dwrite")
        add_defines(
            "_AMD64_",
            "NOMINMAX",
            "UNICODE",
            "WIN32_LEAN_AND_MEAN"
        )
        add_cxflags(
            "/utf-8",
            "/permissive-",
            "/EHa",
            "/W4",
            "/w44265",
            "/w44289",
            "/w44296",
            "/w45263",
            "/w44738",
            "/w45204"
        )
        add_cxflags(
            "/EHs",
            "-Wno-microsoft-cast",
            "-Wno-invalid-offsetof",
            "-Wno-c++2b-extensions",
            "-Wno-microsoft-include",
            "-Wno-overloaded-virtual",
            "-Wno-ignored-qualifiers",
            "-Wno-missing-field-initializers",
            "-Wno-potentially-evaluated-expression",
            "-Wno-pragma-system-header-outside-header",
            {tools = {"clang_cl"}}
        ) 
        add_files("src/ll/core/**.rc")
    end

    if is_config("target_type", "server") then
        add_headerfiles(
        "src-server/(ll/api/**.h)"
        -- ,"src-server/(mc/**.h)"
        )
        add_includedirs("src-server")
        add_files(
            "src-server/**.cpp"
        )
    else
        if is_plat("windows") then
            add_syslinks("dxgi", "runtimeobject", "gdi32")
        end
        add_packages("imgui")
        add_headerfiles(
        "src-client/(ll/api/**.h)"
        -- , "src-client/(mc/**.h)"
        )
        add_includedirs("src-client")
        add_files("src-client/**.cpp")
        remove_files( -- remove when everything fine
            "src/mc/world/**.cpp",
            -- "src/mc/world/level/**.cpp",
            "src/mc/network/**.cpp",
            "src/mc/server/*.cpp",
            -- "src/mc/nbt/**.cpp",
            -- "src/ll/api/chrono/**.cpp",
            -- "src/ll/api/command/**.cpp",
            -- "src/ll/core/command/**.cpp",
            -- "src/ll/api/event/**.cpp",
            -- "src/ll/api/Versions.cpp",
            -- "src/ll/api/service/ServiceManager.cpp",
            -- "src/ll/api/utils/CryptoUtils.cpp",
            -- "src/ll/api/thread/TickSyncSleep.cpp",
            -- "src/ll/api/thread/TickSyncTaskPool.cpp",
            "src/ll/core/plugin-abi/**.cpp"
            -- "src/ll/core/tweak/ModifyMemoryAllocator.cpp"
        )
        add_cxflags("/wd4273")
        add_shflags("/IGNORE:4217")
    end

    if has_config("tests") then
        add_defines("LL_DEBUG")
        add_packages("gtest")
            add_includedirs("src-test/common/")
            add_files("src-test/common/**.cpp")
        if is_config("target_type", "server") then
            add_includedirs("src-test/server/")
            add_files("src-test/server/**.cpp")
        else
            add_includedirs("src-test/client/")
            add_files("src-test/client/**.cpp")
        end
        before_build(function (target)
            headers = ""
            for _,x in ipairs(os.files("src/**.h")) do
                headers = headers.."#include \""..path.relative(x, "src/").."\"\n"
            end
            file = io.open("src-test/common/include_all.cpp", "w")
            file:write(headers)
            file:close()
        if is_config("target_type", "server") then
            headers = ""
            for _,x in ipairs(os.files("src-server/**.h")) do
                headers = headers.."#include \""..path.relative(x, "src-server/").."\"\n"
            end
            file = io.open("src-test/server/include_all.cpp", "w")
            file:write(headers)
            file:close()
        else
            headers = ""
            for _,x in ipairs(os.files("src-client/**.h")) do
                headers = headers.."#include \""..path.relative(x, "src-client/").."\"\n"
            end
            file = io.open("src-test/client/include_all.cpp", "w")
            file:write(headers)
            file:close()
        end
        end)
        after_build(function (target)
            io.writefile("src-test/common/include_all.cpp", "// auto gen when build test\n")
        if is_config("target_type", "server") then
            io.writefile("src-test/server/include_all.cpp", "// auto gen when build test\n")
        else
            io.writefile("src-test/client/include_all.cpp", "// auto gen when build test\n")
        end
        end)
    end

    if has_config("use_mimalloc") then
        add_defines("LL_USE_MIMALLOC")
    end

    if is_mode("debug") then
        add_defines("LL_DEBUG")
    end

    on_config(function (target)
        -- vs_runtime can not be set to MDd or MTd.
        if has_config("vs_runtime") and (get_config("vs_runtime"):endswith("d")) then
            raise("LeviLamina: vs_runtime can not be set to MDd or MTd")
        end
    end)

    on_load(function (target)
        local tag = os.iorun("git describe --tags --abbrev=0 --always")
        local major, minor, patch, suffix = tag:match("v(%d+)%.(%d+)%.(%d+)(.*)")
        if not major then
            print("Failed to parse version tag, using 0.0.0")
            major, minor, patch = 0, 0, 0
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
