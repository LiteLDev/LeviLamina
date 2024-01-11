add_rules("mode.debug", "mode.release")

includes("scripts/localbdslibrary.lua")

add_repositories("liteldev-repo https://github.com/LiteLDev/xmake-repo.git")

-- Dependencies from xmake-repo.
add_requires("entt 3.12.2")
add_requires("fmt 10.1.1")
add_requires("gsl 4.0.0")
add_requires("leveldb 1.23")
add_requires("magic_enum 0.9.0")
add_requires("nlohmann_json 3.11.2")
add_requires("rapidjson 1.1.0")

-- Dependencies from liteldev-repo.
add_requires("ctre 3.8.1")
add_requires("pcg_cpp 1.0.0")
add_requires("pfr 2.1.1")
add_requires("preloader 1.4.0")
add_requires("symbolprovider 1.1.0")

if has_config("tests") then
    add_requires("gtest 1.12.1")
end

if has_config("localbdslibrary") then
    add_requires("localbdslibrary")
else
    add_requires("bdslibrary 1.20.50.03")
end

if not has_config("vs_runtime") then
    set_runtimes("MD")
end

option("tests")
    set_default(false)
    set_showmenu(true)
    set_description("Enable tests")

option("localbdslibrary")
    set_default(false)
    set_showmenu(true)
    set_description("Use local bdslibrary")

target("LeviLamina")
    add_configfiles(
        "src/(ll/core/Version.h.in)"
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
    add_cxxflags(
        "-Wno-c++2b-extensions",
        "-Wno-microsoft-cast",
        "-Wno-pragma-system-header-outside-header",
        {tools = {"clang_cl"}}
    )
    add_defines(
        "_AMD64_",
        "_CRT_SECURE_NO_WARNINGS",
        "_ENABLE_CONSTEXPR_MUTEX_CONSTRUCTOR",
        "NOMINMAX",
        "UNICODE",
        "WIN32_LEAN_AND_MEAN",
        "ENTT_PACKED_PAGE=128",
        { public = true }
    )
    add_defines(
        "LL_EXPORT",
        "_HAS_CXX23=1" -- work around
    )
    add_files(
        "src/ll/api/**.cpp",
        "src/ll/core/**.cpp",
        "src/ll/core/**.rc",
        "src/mc/**.cpp"
    )
    add_headerfiles(
        "src/(ll/api/**.h)",
        "src/(mc/**.h)"
    )
    add_includedirs(
        "src",
        "$(buildir)/config"
    )
    add_packages(
        "entt",
        "fmt",
        "gsl",
        "leveldb",
        "magic_enum",
        "nlohmann_json",
        "rapidjson",
        "ctre",
        "pcg_cpp",
        "pfr",
        "preloader",
        "symbolprovider",
        { public = true }
    )
    add_shflags(
        "/DELAYLOAD:bedrock_server.dll",
        { public = true }
    )
    set_configdir("$(buildir)/config")
    set_configvar("LL_WORKSPACE_FOLDER", "$(projectdir)")
    set_exceptions("none")
    set_kind("shared")
    set_languages("c++20")
    set_pcxxheader("src/mc/_HeaderOutputPredefine.h")
    set_symbols("debug")

    if has_config("tests") then
        add_packages("gtest")
        add_defines("LL_DEBUG")
        add_files("src/ll/test/**.cpp")

        before_build(function (target)
            headers = ""
            for _,x in ipairs(os.files("src/**.h")) do
             headers = headers.."#include \""..path.relative(x, "src/").."\"\n"
            end
            file = io.open("src/ll/test/include_all.cpp", "w")
            file:write(headers)
            file:close()
        end)
        after_build(function (target)
            io.writefile("src/ll/test/include_all.cpp", "// auto gen when build test")
        end)
    end

    if is_mode("debug") then
        add_defines("LL_DEBUG")
    end

    if has_config("localbdslibrary") then
        add_packages("localbdslibrary")
    else
        add_packages("bdslibrary")
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
target_end()
