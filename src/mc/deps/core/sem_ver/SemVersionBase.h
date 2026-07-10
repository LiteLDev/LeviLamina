#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/sem_ver/SemVersionAnyVersionType.h"

// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"

// Some codes are from
// https://github.com/EndstoneMC/endstone/blob/main/src/bedrock/core/sem_ver/sem_version.h

template <typename T>
class SemVersionBase {
public:
    uint16_t mMajor;
    uint16_t mMinor;
    uint16_t mPatch;
    bool     mValidVersion;
    bool     mAnyVersion;
    T        mPreRelease;
    T        mBuildMeta;

    SemVersionBase() : mMajor(0), mMinor(0), mPatch(0), mValidVersion(false), mAnyVersion(false) {}

    explicit SemVersionBase(SemVersionAnyVersionType)
    : mMajor(0),
      mMinor(0),
      mPatch(0),
      mValidVersion(true),
      mAnyVersion(true) {}

    explicit SemVersionBase(uint16_t major, uint16_t minor, uint16_t patch, T preRelease, T buildMeta)
    : mMajor(major),
      mMinor(minor),
      mPatch(patch),
      mValidVersion(true),
      mAnyVersion(false),
      mPreRelease(preRelease),
      mBuildMeta(buildMeta) {}

    MCAPI std::string asString() const;
};

template <typename StringTypeLhs, typename StringTypeRhs>
bool operator==(SemVersionBase<StringTypeLhs> const& lhs, SemVersionBase<StringTypeRhs> const& rhs) {
    if (lhs.mAnyVersion && rhs.mAnyVersion) {
        return true;
    }

    if (lhs.mAnyVersion || rhs.mAnyVersion) {
        return false;
    }

    if (lhs.mMajor != rhs.mMajor || lhs.mMinor != rhs.mMinor || lhs.mPatch != rhs.mPatch) {
        return false;
    }

    if (lhs.mPreRelease.length() != rhs.mPreRelease.length()) {
        return false;
    }

    if (std::memcmp(&lhs.mPreRelease, &rhs.mPreRelease, rhs.mPreRelease.length()) != 0) {
        return false;
    }
    return true;
}

template <typename StringTypeLhs, typename StringTypeRhs>
bool operator!=(SemVersionBase<StringTypeLhs> const& lhs, SemVersionBase<StringTypeRhs> const& rhs) {
    return !(lhs == rhs);
}

template <typename StringTypeLhs, typename StringTypeRhs>
bool operator<(SemVersionBase<StringTypeLhs> const& lhs, SemVersionBase<StringTypeRhs> const& rhs) {
    if (lhs.mAnyVersion) {
        return false;
    }

    if (rhs.mAnyVersion) {
        return true;
    }

    if (lhs.mMajor != rhs.mMajor) {
        return lhs.mMajor < rhs.mMajor;
    }

    if (lhs.mMinor != rhs.mMinor) {
        return lhs.mMinor < rhs.mMinor;
    }

    if (lhs.mPatch != rhs.mPatch) {
        return lhs.mPatch < rhs.mPatch;
    }

    if (lhs.mPreRelease.length() == 0 && rhs.mPreRelease.length() != 0) {
        return false;
    }

    if (lhs.mPreRelease.length() != 0 && rhs.mPreRelease.length() == 0) {
        return true;
    }

    auto versionSplit = [](std::string_view str, char const delim = '.') -> std::vector<std::string> {
        std::vector<std::string> result;
        size_t                   start = 0;
        size_t                   end;
        while ((end = str.find(delim, start)) != std::string_view::npos) {
            if (end > start) {
                result.emplace_back(str.substr(start, end - start));
            }
            start = end + 1;
        }
        if (start < str.size()) {
            result.emplace_back(str.substr(start));
        }
        return result;
    };

    std::vector<std::string> lhsParts = versionSplit(lhs.mPreRelease);
    std::vector<std::string> rhsParts = versionSplit(rhs.mPreRelease);

    for (size_t i = 0; i < std::min(lhsParts.size(), rhsParts.size()); ++i) {
        bool lhsNumeric = std::ranges::all_of(lhsParts[i], ::isdigit);
        bool rhsNumeric = std::ranges::all_of(rhsParts[i], ::isdigit);

        if (lhsNumeric && rhsNumeric) {
            if (std::stoi(lhsParts[i]) != std::stoi(rhsParts[i])) {
                return std::stoi(lhsParts[i]) < std::stoi(rhsParts[i]);
            }
        } else if (lhsNumeric) {
            return true;
        } else if (rhsNumeric) {
            return false;
        } else {
            if (lhsParts[i] != rhsParts[i]) {
                return lhsParts[i] < rhsParts[i];
            }
        }
    }
    return lhsParts.size() < rhsParts.size();
}

template <typename StringTypeLhs, typename StringTypeRhs>
bool operator<=(SemVersionBase<StringTypeLhs> const& lhs, SemVersionBase<StringTypeRhs> const& rhs) {
    return lhs == rhs || lhs < rhs;
}
