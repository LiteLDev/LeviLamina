#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticleEffectInfo : public ::std::enable_shared_from_this<::ParticleEffectInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk31e184;
    ::ll::UntypedStorage<8, 48> mUnka887e1;
    ::ll::UntypedStorage<8, 16> mUnk43f5c0;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectInfo& operator=(ParticleEffectInfo const&);
    ParticleEffectInfo(ParticleEffectInfo const&);
    ParticleEffectInfo();
};
