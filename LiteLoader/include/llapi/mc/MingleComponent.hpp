/**
 * @file  MingleComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MingleComponent.
 *
 */
class MingleComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class MingleState;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINGLECOMPONENT
public:
    class MingleComponent& operator=(class MingleComponent const &) = delete;
    MingleComponent(class MingleComponent const &) = delete;
#endif

public:
    /**
     * @hash   1889706827
     * @symbol  ??0MingleComponent\@\@QEAA\@XZ
     */
    MCAPI MingleComponent();
    /**
     * @hash   -615553006
     * @symbol  ?clearPreviousPartnerId\@MingleComponent\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MingleComponent & clearPreviousPartnerId();
    /**
     * @hash   -600647353
     * @symbol  ?fetchCurrentPartner\@MingleComponent\@\@QEBAPEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI class Actor * fetchCurrentPartner(class Actor const &) const;
    /**
     * @hash   -1909002937
     * @symbol  ?resetState\@MingleComponent\@\@QEAAXXZ
     */
    MCAPI void resetState();
    /**
     * @hash   1267046315
     * @symbol  ?setMingleState\@MingleComponent\@\@QEAAAEAV1\@W4MingleState\@1\@\@Z
     */
    MCAPI class MingleComponent & setMingleState(enum class MingleComponent::MingleState);
    /**
     * @hash   778778549
     * @symbol  ?setPartnerId\@MingleComponent\@\@QEAAAEAV1\@UActorUniqueID\@\@\@Z
     */
    MCAPI class MingleComponent & setPartnerId(struct ActorUniqueID);

};