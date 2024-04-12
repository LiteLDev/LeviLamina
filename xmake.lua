add_rules("mode.debug", "mode.release")

add_repositories("liteldev-repo https://github.com/LiteLDev/xmake-repo.git")

if not has_config("vs_runtime") then
    set_runtimes("MD")
end

add_requires("entt")
add_requires("gsl")
add_requires("leveldb")
add_requires("rapidjson v1.1.0")

target("bdsheader")
    set_license("mit")
    set_kind("shared")
    set_languages("c++20")
    set_symbols("debug")
    set_exceptions("none")
    add_headerfiles("src/(**.h)")
    add_includedirs("./src")
    add_cxflags("/utf-8", "/permissive-", "/EHa", "/W4")
    add_defines("UNICODE", "WIN32_LEAN_AND_MEAN", "_AMD64_", "NOMINMAX", "_CRT_SECURE_NO_WARNINGS")
    add_shflags("/DELAYLOAD:bedrock_server.dll")
    add_files("test/**.cpp")
    add_packages("gsl", "entt", "leveldb", "rapidjson")
