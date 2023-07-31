#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MingleComponent {
public:
    // MingleComponent inner types define
    enum class MingleState {};

public:
    // prevent constructor by default
    MingleComponent& operator=(MingleComponent const&) = delete;
    MingleComponent(MingleComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MingleComponent\@\@QEAA\@XZ
     */
    MCAPI MingleComponent();
    /**
     * @symbol ?clearPreviousPartnerId\@MingleComponent\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MingleComponent& clearPreviousPartnerId();
    /**
     * @symbol ?fetchCurrentPartner\@MingleComponent\@\@QEBAPEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI class Actor* fetchCurrentPartner(class Actor const&) const;
    /**
     * @symbol ?resetState\@MingleComponent\@\@QEAAXXZ
     */
    MCAPI void resetState();
    /**
     * @symbol ?setMingleState\@MingleComponent\@\@QEAAAEAV1\@W4MingleState\@1\@\@Z
     */
    MCAPI class MingleComponent& setMingleState(enum class MingleComponent::MingleState);
    /**
     * @symbol ?setPartnerId\@MingleComponent\@\@QEAAAEAV1\@UActorUniqueID\@\@\@Z
     */
    MCAPI class MingleComponent& setPartnerId(struct ActorUniqueID);
    // NOLINTEND
};
