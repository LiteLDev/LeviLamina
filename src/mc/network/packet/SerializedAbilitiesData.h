#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SerializedAbilitiesData {
public:
    // SerializedAbilitiesData inner types declare
    // clang-format off
    struct SerializedLayer;
    // clang-format on

    // SerializedAbilitiesData inner types define
    enum class SerializedAbilitiesLayer {};

    struct SerializedLayer {

    public:
        // prevent constructor by default
        SerializedLayer& operator=(SerializedLayer const&) = delete;
        SerializedLayer(SerializedLayer const&)            = delete;
        SerializedLayer()                                  = delete;
    };

public:
    // prevent constructor by default
    SerializedAbilitiesData& operator=(SerializedAbilitiesData const&) = delete;
    SerializedAbilitiesData(SerializedAbilitiesData const&)            = delete;
    SerializedAbilitiesData()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SerializedAbilitiesData\@\@QEAA\@UActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCAPI SerializedAbilitiesData(struct ActorUniqueID, class LayeredAbilities const&);
    /**
     * @symbol ?fillIn\@SerializedAbilitiesData\@\@QEBAXAEAVLayeredAbilities\@\@\@Z
     */
    MCAPI void fillIn(class LayeredAbilities&) const;
    /**
     * @symbol ?getTargetPlayer\@SerializedAbilitiesData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetPlayer() const;
    /**
     * @symbol ??1SerializedAbilitiesData\@\@QEAA\@XZ
     */
    MCAPI ~SerializedAbilitiesData();
    // NOLINTEND
};
