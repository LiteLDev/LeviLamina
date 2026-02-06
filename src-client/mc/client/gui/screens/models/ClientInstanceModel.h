#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ClientModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
class IClientInstance;
class ItemStackBase;
class Option;
class PlayerCommandOrigin;
class RectangleArea;
class Vec2;
struct GameRuleId;
// clang-format on

class ClientInstanceModel : public ::ClientModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceModel() /*override*/ = default;

    virtual bool hasCommandsEnabled() const /*override*/;

    virtual ::std::string getFormattedHoverText(::ItemStackBase const& item, bool const showCategory) /*override*/;

    virtual bool achievementsWillBeDisabledOnLoad() /*override*/;

    virtual bool hasAchievementsDisabled() /*override*/;

    virtual ::std::string getLevelName() /*override*/;

    virtual int getGameDifficulty() /*override*/;

    virtual int getGameType() /*override*/;

    virtual void setGameType(::GameType) /*override*/;

    virtual int getGenerator() /*override*/;

    virtual bool getStartWithMap() /*override*/;

    virtual bool isAlwaysDay() /*override*/;

    virtual bool isGameRule(::GameRuleId gameRule) /*override*/;

    virtual bool isImmutableWorld() /*override*/;

    virtual ::std::unique_ptr<::PlayerCommandOrigin> makePlayerCommandOrigin() /*override*/;

    virtual void setCommandsEnabled(bool val) /*override*/;

    virtual void disableAchievements() /*override*/;

    virtual float getGuiScale() const /*override*/;

    virtual ::Vec2 getScreenSize() const /*override*/;

    virtual ::RectangleArea getSafeScreenZoneArea() const /*override*/;

    virtual ::RectangleArea getWYSIWYGSafeScreenZoneArea() const /*override*/;

    virtual ::RectangleArea getLayoutCustomizationSubPanelRectangle() const /*override*/;

    virtual ::RectangleArea getLayoutCustomizationMainPanelRectangle() const /*override*/;

    virtual ::RectangleArea getWYSIWYGBottomHudReservedArea() const /*override*/;

    virtual ::RectangleArea const& getHUDHotbarRectangle() const /*override*/;

    virtual ::Option const& getGuiScaleOption() const /*override*/;

    virtual void setGuiScaleOffset(int guiScale) /*override*/;

    virtual ::FontHandle getFontHandle() const /*override*/;

    virtual void notifyForLeaveGame() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $hasCommandsEnabled() const;

    MCAPI ::std::string $getFormattedHoverText(::ItemStackBase const& item, bool const showCategory);

    MCAPI bool $achievementsWillBeDisabledOnLoad();

    MCAPI bool $hasAchievementsDisabled();

    MCAPI ::std::string $getLevelName();

    MCAPI int $getGameDifficulty();

    MCAPI int $getGameType();

    MCAPI int $getGenerator();

    MCAPI bool $getStartWithMap();

    MCAPI bool $isAlwaysDay();

    MCAPI bool $isGameRule(::GameRuleId gameRule);

    MCAPI bool $isImmutableWorld();

    MCAPI ::std::unique_ptr<::PlayerCommandOrigin> $makePlayerCommandOrigin();

    MCAPI void $setCommandsEnabled(bool val);

    MCAPI void $disableAchievements();

    MCAPI float $getGuiScale() const;

    MCAPI ::Vec2 $getScreenSize() const;

    MCAPI ::RectangleArea $getSafeScreenZoneArea() const;

    MCAPI ::RectangleArea $getWYSIWYGSafeScreenZoneArea() const;

    MCAPI ::RectangleArea $getLayoutCustomizationSubPanelRectangle() const;

    MCAPI ::RectangleArea $getLayoutCustomizationMainPanelRectangle() const;

    MCAPI ::RectangleArea $getWYSIWYGBottomHudReservedArea() const;

    MCAPI ::RectangleArea const& $getHUDHotbarRectangle() const;

    MCAPI ::Option const& $getGuiScaleOption() const;

    MCAPI void $setGuiScaleOffset(int guiScale);

    MCAPI ::FontHandle $getFontHandle() const;

    MCAPI void $notifyForLeaveGame();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
