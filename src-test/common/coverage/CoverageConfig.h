#pragma once

#include <algorithm>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace ll::test::coverage {

class CoverageConfig {
public:
    std::string              name{"default"};
    std::vector<std::string> sourcePathAnchors;
    std::vector<std::string> targetSourcePrefixes;
    std::vector<std::string> moduleFileNames;
    std::vector<std::string> modulePathContains;
    bool                     fallbackToSelfModule{false};
    bool                     includeSourceFunctions{true};
    bool                     includeExportedFunctions{true};
    CoverageConfig() = default;

    std::string normalizeSourcePath(std::string path) const {
        std::replace(path.begin(), path.end(), '/', '\\');

        size_t bestPos = std::string::npos;
        for (auto const& anchor : sourcePathAnchors) {
            auto pos = path.find(anchor);
            if (pos != std::string::npos && (bestPos == std::string::npos || pos < bestPos)) {
                bestPos = pos;
            }
        }

        if (bestPos != std::string::npos) {
            return path.substr(bestPos);
        }
        return path;
    }

    bool matchesSourceFile(std::string const& rawPath) const {
        auto normalized = normalizeSourcePath(rawPath);
        for (auto const& prefix : targetSourcePrefixes) {
            if (startsWithIgnoreCase(normalized, prefix)) {
                return true;
            }
        }
        return false;
    }

    bool
    matchesModule(std::string const& modulePath, std::string_view fileName, std::string_view fallbackModuleName) const {
        for (auto const& candidate : moduleFileNames) {
            if (equalsIgnoreCase(fileName, candidate)) {
                return true;
            }
            if (!containsDot(candidate) && equalsIgnoreCase(stripExtension(fileName), candidate)) {
                return true;
            }
        }

        for (auto const& fragment : modulePathContains) {
            if (containsIgnoreCase(modulePath, fragment)) {
                return true;
            }
        }

        if (fallbackToSelfModule && !fallbackModuleName.empty()) {
            return equalsIgnoreCase(fileName, fallbackModuleName);
        }

        return false;
    }

private:
    static char asciiToLower(char c) { return c >= 'A' && c <= 'Z' ? static_cast<char>(c - 'A' + 'a') : c; }

    static bool equalsIgnoreCase(std::string_view lhs, std::string_view rhs) {
        if (lhs.size() != rhs.size()) {
            return false;
        }
        for (size_t i = 0; i < lhs.size(); ++i) {
            if (asciiToLower(lhs[i]) != asciiToLower(rhs[i])) {
                return false;
            }
        }
        return true;
    }

    static bool startsWithIgnoreCase(std::string_view value, std::string_view prefix) {
        if (prefix.size() > value.size()) {
            return false;
        }
        return equalsIgnoreCase(value.substr(0, prefix.size()), prefix);
    }

    static bool containsIgnoreCase(std::string_view value, std::string_view fragment) {
        if (fragment.empty()) {
            return true;
        }
        if (fragment.size() > value.size()) {
            return false;
        }
        for (size_t pos = 0; pos + fragment.size() <= value.size(); ++pos) {
            if (equalsIgnoreCase(value.substr(pos, fragment.size()), fragment)) {
                return true;
            }
        }
        return false;
    }

    static bool containsDot(std::string_view value) { return value.find('.') != std::string_view::npos; }

    static std::string_view stripExtension(std::string_view value) {
        auto pos = value.find_last_of('.');
        if (pos == std::string_view::npos) {
            return value;
        }
        return value.substr(0, pos);
    }
};

} // namespace ll::test::coverage
