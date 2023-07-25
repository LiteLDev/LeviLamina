add_rules("mode.debug", "mode.release")

add_repositories("liteldev-repo https://github.com/LiteLDev/xmake-repo.git")

if not has_config("vs_runtime") then
    set_runtimes("MD")
end

add_requires("gsl v3.1.0")
add_requires("entt v3.11.1")
add_requires("leveldb 1.23")
add_requires("asio 1.28.0")
add_requires("rapidjson v1.1.0")
add_requires("openssl 1.1.1-t")

target("bdsheader")
    set_license("mit")
    set_kind("shared")
    set_languages("c++20")
    set_symbols("debug")
    set_exceptions("none")
    add_headerfiles("src/(**.h)")
    add_includedirs("./src")
    add_cxflags("/utf-8", "/permissive-", "/EHa", "/W3")
    add_defines("UNICODE", "WIN32_LEAN_AND_MEAN", "_AMD64_", "NOMINMAX", "_CRT_SECURE_NO_WARNINGS")
    add_shflags("/DELAYLOAD:bedrock_server.dll")
    add_files("src/**.cpp")
    add_packages("gsl", "entt", "leveldb", "asio", "rapidjson", "openssl")
