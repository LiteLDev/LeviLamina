add_rules("mode.release", "mode.debug")

set_xmakever("3.0.0")

add_repositories("levimc-repo " .. (get_config("levimc_repo") or "https://github.com/LiteLDev/xmake-repo.git"))

local is_windows  = is_plat("windows")
local is_linux    = is_plat("linux")

local is_server = is_config("target_type", "server")

-- Dependencies from xmake-repo.
add_requires("ctre 3.8.1")
add_requires("entt v3.15.0")
add_requires("expected-lite v0.8.0")
add_requires("fmt 11.2.0")
add_requires("gsl v4.0.0")
add_requires("glm 1.0.1")
add_requires("leveldb 1.23")
add_requires("magic_enum v0.9.7")
add_requires("nlohmann_json v3.11.3")
add_requires("rapidjson v1.1.0")
add_requires("type_safe v0.2.4")
add_requires("mimalloc v2.1.7")
add_requires("cpr[ssl=y] 1.11.1")
add_requires("parallel-hashmap v2.0.0")
add_requires("concurrentqueue v1.0.4")

-- Dependencies from levimc-repo.
add_requires("pcg_cpp v1.0.0")
add_requires("pfr 2.1.1")
add_requires("demangler v17.0.7")
add_requires("levibuildscript 0.4.1")
add_requires("preloader v1.15.7")
add_requires("symbolprovider v1.2.0")
add_requires("trampoline 2024.11.7")

if is_windows then
add_requires("libhat 0.4.0")
end

if is_linux then
set_toolchains("clang")
end

if has_config("tests") then
    add_requires("gtest")
end

if is_server then
    if is_windows then
        add_requires("bedrockdata v1.21.132-server.1")
    end
else
    if is_windows then
        add_requires("bedrockdata v1.21.132-client.1")
    end
end

option("levimc_repo")
    set_default("https://github.com/LiteLDev/xmake-repo.git")
    set_showmenu(true)
    set_description("Set the levimc-repo path or url")
option_end()

option("publish")
    set_default(false)
    set_showmenu(true)
option_end()

option("tests")
    set_default(false)
    set_showmenu(true)
    set_description("Enable tests")
option_end()

option("target_type")
    set_default("server")
    set_showmenu(true)
    set_values("server", "client")
option_end()

if is_server then
    set_defaultarchs("windows|x64")
    set_allowedarchs("windows|x64", "linux|x86_64")
else
    set_defaultarchs("windows|x64")
    set_allowedarchs("windows|x64")
end

if is_windows and not has_config("vs_runtime") then
    set_runtimes("MD")
end

if is_linux then
    set_runtimes("c++_shared")
end

target("LeviLamina")
    add_rules("@levibuildscript/linkrule")
    set_languages("c++20")
    set_kind("shared")
    set_symbols("debug")
    add_files("src/**.cpp")
    add_files("src/**.rc")
    set_configdir("$(builddir)/config")
    set_configvar("LL_WORKSPACE_FOLDER", "$(projectdir)")
    add_configfiles("src/(ll/core/Version.h.in)")
    add_headerfiles("src/(ll/api/**.h)", "src/(mc/**.h)")
    add_includedirs("src", "$(builddir)/config")
    set_pcxxheader("src/ll/api/Global.h")
    add_packages("demangler", "mimalloc", "ctre", "cpr", "trampoline", "preloader")
    add_packages(
        "entt",
        "expected-lite",
        "fmt",
        "gsl",
        "glm",
        "leveldb",
        "magic_enum",
        "nlohmann_json",
        "rapidjson",
        "type_safe",
        "pcg_cpp",
        "pfr",
        "symbolprovider",
        "bedrockdata",
        "parallel-hashmap",
        "concurrentqueue",
        {public = true}
    )
    add_defines("LL_EXPORT")
    add_defines(
        "FMT_USE_FULL_CACHE_DRAGONBOX=1",
        "ENTT_PACKED_PAGE=128",
        "ENTT_SPARSE_PAGE=2048",
        {public = true}
    )

    if not is_windows then
        add_cxxflags("clang::-Wno-invalid-offsetof")
        add_defines(
            "__GCC_DESTRUCTIVE_SIZE=64",
            "__GCC_CONSTRUCTIVE_SIZE=64",
            {tools = {"clang"}}
        )
    end

    -- work around to enable c++23

    if is_windows then
        -- msstl
        add_defines("_HAS_CXX23=1")
    else
        -- libc++
        add_cxxflags("clang::-stdlib=libc++")
        add_defines("_LIBCPP_STD_VER=23")
    end

    if is_windows then
        add_packages("libhat")
        add_syslinks("Version", "DbgHelp", "dwrite")
        add_defines(
            "_AMD64_",
            "NOMINMAX",
            "UNICODE",
            "WIN32_LEAN_AND_MEAN"
        )
        set_exceptions("none")
        add_cxflags(
            "/utf-8",
            "/permissive-",
            "/EHa",
            "/W4",
            "/w44265",
            "/w44289",
            "/w44296",
            "/w45263",
            "/w44738"
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
    end

    if is_server then
        add_headerfiles("src-server/(ll/api/**.h)", "src-server/(mc/**.h)")
        add_includedirs("src-server")
        add_files("src-server/**.cpp")
        add_defines("LL_PLAT_S")
    else
        if is_windows then
            add_syslinks("dxgi", "runtimeobject", "gdi32")
        end
        add_headerfiles("src-client/(ll/api/**.h)", "src-client/(mc/**.h)")
        add_includedirs("src-client")
        add_defines("LL_PLAT_C")
        add_files("src-client/**.cpp")
        add_cxflags("/wd4273")
        add_shflags("/IGNORE:4217")
    end

    if has_config("tests") then
        add_defines("LL_DEBUG")
        add_packages("gtest")
            add_includedirs("src-test/common/")
            add_files("src-test/common/**.cpp")
        if is_server then
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
        if is_server then
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
            if is_server then
                io.writefile("src-test/server/include_all.cpp", "// auto gen when build test\n")
            else
                io.writefile("src-test/client/include_all.cpp", "// auto gen when build test\n")
            end
        end)
    end

    if has_config("publish") then
        add_defines("LL_VERSION_PUBLISH")
    end

    if is_mode("debug") then
        add_defines("LL_DEBUG")
    end

    if not is_windows then
        remove_files("./**/*_win.*")
        remove_files("./**/*_windows.*") -- mojang has two styles
        remove_files("./**/win/**.*")
        remove_headerfiles("./**/win/**.*")
    end
    if not is_linux then
        remove_files("./**/*_linux.*")
        remove_files("./**/linux/**.*")
        remove_headerfiles("./**/linux/**.*")
    end

    on_config(function (target)
        -- vs_runtime can not be set to MDd or MTd.
        if has_config("vs_runtime") and (get_config("vs_runtime"):endswith("d")) then
            raise("LeviLamina: vs_runtime can not be set to MDd or MTd")
        end
    end)

    on_load(function (target)
        import("core.base.json")
        local tag = os.iorun("git describe --tags --abbrev=0 --always")
        local major, minor, patch, suffix = tag:match("v(%d+)%.(%d+)%.(%d+)(.*)")
        if not major then
            print("Failed to parse version tag, using version from tooth.json")
            tag = json.loadfile("tooth.json")["version"]
            major, minor, patch, suffix = tag:match("(%d+)%.(%d+)%.(%d+)(.*)")
        end
        local versionStr =  major.."."..minor.."."..patch
        if suffix then
            prerelease = suffix:match("-(.*)")
            if prerelease then
                prerelease = prerelease:gsub("\n", "")
            end
            if prerelease then
                target:set("configvar", "LL_VERSION_PRERELEASE", prerelease)
                versionStr = versionStr.."-"..prerelease
            end
        end
        target:set("configvar", "LL_VERSION_MAJOR", major)
        target:set("configvar", "LL_VERSION_MINOR", minor)
        target:set("configvar", "LL_VERSION_PATCH", patch)

        if not has_config("publish") then
            local hash = os.iorun("git rev-parse --short HEAD")
            versionStr = versionStr.."+"..hash:gsub("\n", "")
        end

        target:add("rules", "@levibuildscript/modpacker",{
               modVersion = versionStr
           })
    end)
