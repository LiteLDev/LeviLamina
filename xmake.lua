add_rules("mode.debug", "mode.release")

add_repositories("liteldev-repo https://github.com/LiteLDev/xmake-repo.git")

if not has_config("vs_runtime") then
    set_runtimes("MD")
end

add_requires("entt")
add_requires("gsl")
add_requires("glm")
add_requires("leveldb")
add_requires("type_safe")
add_requires("expected-lite")
add_requires("rapidjson v1.1.0")

target("bdsheader")
    set_license("mit")
    set_kind("shared")
    set_languages("c++20")
    set_symbols("debug")
    set_exceptions("none")
    add_headerfiles("src/(**.h)")
    add_includedirs("./src")
    add_cxflags("/utf-8", "/permissive-", "/EHa", "/W0")
    add_defines("UNICODE", "WIN32_LEAN_AND_MEAN", "_AMD64_", "NOMINMAX", "_CRT_SECURE_NO_WARNINGS")
    add_shflags("/DELAYLOAD:bedrock_server.dll")
    add_files("test/**.cpp")
    add_packages("gsl", "entt", "leveldb", "type_safe", "rapidjson", "glm", "expected-lite")
    before_build(function (target)
        headers = "// clang-format off\n#ifndef __INCLUDE_ALL_H__\n#define __INCLUDE_ALL_H__\n\n"
        for _,x in ipairs(os.files("src/**.h")) do
            headers = headers.."#include \""..path.relative(x, "src/").."\"\n"
        end
        file = io.open("test/include_all.h", "w")
        file:write(headers)
        file:write("\n#endif\n")
        file:write("// clang-format on\n")
        file:close()
    end)
    after_build(function (target)
        io.writefile("test/include_all.h", "// auto gen when build test\n")
    end)
