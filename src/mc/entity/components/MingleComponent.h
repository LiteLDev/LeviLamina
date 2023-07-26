#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MingleComponent {
public:
    // MingleComponent inner types declare
    // clang-format off

    // clang-format on

    // MingleComponent inner types define
    enum class MingleState {};

public:
    // prevent constructor by default
    MingleComponent& operator=(MingleComponent const&) = delete;
    MingleComponent(MingleComponent const&)            = delete;

public:
    /**
     * @symbol ??0MingleComponent\@\@QEAA\@XZ
     */
    MCAPI MingleComponent(); // NOLINT
    /**
     * @symbol ?clearPreviousPartnerId\@MingleComponent\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MingleComponent& clearPreviousPartnerId(); // NOLINT
    /**
     * @symbol ?fetchCurrentPartner\@MingleComponent\@\@QEBAPEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI class Actor* fetchCurrentPartner(class Actor const&) const; // NOLINT
    /**
     * @symbol ?resetState\@MingleComponent\@\@QEAAXXZ
     */
    MCAPI void resetState(); // NOLINT
    /**
     * @symbol ?setMingleState\@MingleComponent\@\@QEAAAEAV1\@W4MingleState\@1\@\@Z
     */
    MCAPI class MingleComponent& setMingleState(enum class MingleComponent::MingleState); // NOLINT
    /**
     * @symbol ?setPartnerId\@MingleComponent\@\@QEAAAEAV1\@UActorUniqueID\@\@\@Z
     */
    MCAPI class MingleComponent& setPartnerId(struct ActorUniqueID); // NOLINT
};
