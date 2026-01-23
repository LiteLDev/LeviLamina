#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ClientModel.h"
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

class ClientInstanceModel : public ::ClientModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk275d71;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceModel& operator=(ClientInstanceModel const&);
    ClientInstanceModel(ClientInstanceModel const&);
    ClientInstanceModel();

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
    MCNAPI bool $hasCommandsEnabled() const;

    MCNAPI ::std::string $getFormattedHoverText(::ItemStackBase const& item, bool const showCategory);

    MCNAPI bool $achievementsWillBeDisabledOnLoad();

    MCNAPI bool $hasAchievementsDisabled();

    MCNAPI ::std::string $getLevelName();

    MCNAPI int $getGameDifficulty();

    MCNAPI int $getGameType();

    MCNAPI int $getGenerator();

    MCNAPI bool $getStartWithMap();

    MCNAPI bool $isAlwaysDay();

    MCNAPI bool $isGameRule(::GameRuleId gameRule);

    MCNAPI bool $isImmutableWorld();

    MCNAPI ::std::unique_ptr<::PlayerCommandOrigin> $makePlayerCommandOrigin();

    MCNAPI void $setCommandsEnabled(bool val);

    MCNAPI void $disableAchievements();

    MCNAPI float $getGuiScale() const;

    MCNAPI ::Vec2 $getScreenSize() const;

    MCNAPI ::RectangleArea $getSafeScreenZoneArea() const;

    MCNAPI ::RectangleArea $getWYSIWYGSafeScreenZoneArea() const;

    MCNAPI ::RectangleArea $getLayoutCustomizationSubPanelRectangle() const;

    MCNAPI ::RectangleArea $getLayoutCustomizationMainPanelRectangle() const;

    MCNAPI ::RectangleArea $getWYSIWYGBottomHudReservedArea() const;

    MCNAPI ::RectangleArea const& $getHUDHotbarRectangle() const;

    MCNAPI ::Option const& $getGuiScaleOption() const;

    MCNAPI void $setGuiScaleOffset(int guiScale);

    MCNAPI ::FontHandle $getFontHandle() const;

    MCNAPI void $notifyForLeaveGame();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
