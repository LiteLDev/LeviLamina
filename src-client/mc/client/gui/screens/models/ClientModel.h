#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
class ItemStackBase;
class Option;
class PlayerCommandOrigin;
class RectangleArea;
class Vec2;
struct GameRuleId;
// clang-format on

class ClientModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientModel() = default;

    virtual bool hasCommandsEnabled() const = 0;

    virtual ::std::string getFormattedHoverText(::ItemStackBase const&, bool const) = 0;

    virtual bool achievementsWillBeDisabledOnLoad() = 0;

    virtual bool hasAchievementsDisabled() = 0;

    virtual ::std::string getLevelName() = 0;

    virtual int getGameDifficulty() = 0;

    virtual int getGameType() = 0;

    virtual void setGameType(::GameType) = 0;

    virtual int getGenerator() = 0;

    virtual bool getStartWithMap() = 0;

    virtual bool isAlwaysDay() = 0;

    virtual bool isGameRule(::GameRuleId) = 0;

    virtual bool isImmutableWorld() = 0;

    virtual ::std::unique_ptr<::PlayerCommandOrigin> makePlayerCommandOrigin() = 0;

    virtual void setCommandsEnabled(bool) = 0;

    virtual void disableAchievements() = 0;

    virtual float getGuiScale() const = 0;

    virtual ::Vec2 getScreenSize() const = 0;

    virtual ::RectangleArea getSafeScreenZoneArea() const = 0;

    virtual ::RectangleArea getWYSIWYGSafeScreenZoneArea() const = 0;

    virtual ::RectangleArea getLayoutCustomizationSubPanelRectangle() const = 0;

    virtual ::RectangleArea getLayoutCustomizationMainPanelRectangle() const = 0;

    virtual ::RectangleArea getWYSIWYGBottomHudReservedArea() const = 0;

    virtual ::RectangleArea const& getHUDHotbarRectangle() const = 0;

    virtual ::Option const& getGuiScaleOption() const = 0;

    virtual void setGuiScaleOffset(int) = 0;

    virtual ::FontHandle getFontHandle() const = 0;

    virtual void notifyForLeaveGame() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
