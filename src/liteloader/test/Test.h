#pragma once

#include <string>
#include <string_view>

namespace ll::test {

struct Result {
    std::string message;
    bool        isPassed;

    static Result passed(std::string_view message = "") { return {std::string{message}, true}; }
    static Result failed(std::string_view message = "") { return {std::string{message}, false}; }
};

class Test {
    std::string name;
    std::string description;

public:
    virtual ~Test() = default;

    virtual Result init() = 0;

    [[nodiscard]] std::string_view getName() const { return name; }

    [[nodiscard]] std::string_view getDescription() const { return description; }

    Test(std::string_view name, std::string_view description) : name{name}, description{description} {}

    void pass(std::string_view message = "");

    void fail(std::string_view message = "");
};
} // namespace ll::test
