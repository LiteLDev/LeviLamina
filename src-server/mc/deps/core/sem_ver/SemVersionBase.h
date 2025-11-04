#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/sem_ver/SemVersionAnyVersionType.h"
#include "mc/deps/core/string/StaticOptimizedString.h"

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

public:
    MCAPI SemVersionBase operator=(SemVersionBase const&);
    MCAPI explicit SemVersionBase(uint16_t, uint16_t, uint16_t, T, T);
    MCAPI std::string asString() const;
    MCAPI std::string_view getPreRelease() const;
};

template <typename T1, typename T2>
MCAPI bool operator<(SemVersionBase<T1> const& lhs, SemVersionBase<T2> const& rhs);
template <typename T1, typename T2>
MCAPI bool operator==(SemVersionBase<T1> const& lhs, SemVersionBase<T2> const& rhs);