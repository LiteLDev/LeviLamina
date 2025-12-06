#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ClientModel.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class PlayerCommandOrigin;
class Vec2;
struct FontHandle;
struct GameRuleId;
struct Option;
struct RectangleArea;
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
    // vIndex: 0
    virtual ~ClientInstanceModel() /*override*/ = default;

    // vIndex: 1
    virtual bool hasCommandsEnabled() const /*override*/;

    // vIndex: 2
    virtual ::std::string getFormattedHoverText(::ItemStackBase const& item, bool const showCategory) /*override*/;

    // vIndex: 3
    virtual bool achievementsWillBeDisabledOnLoad() /*override*/;

    // vIndex: 4
    virtual bool hasAchievementsDisabled() /*override*/;

    // vIndex: 5
    virtual ::std::string getLevelName() /*override*/;

    // vIndex: 6
    virtual int getGameDifficulty() /*override*/;

    // vIndex: 7
    virtual int getGameType() /*override*/;

    // vIndex: 8
    virtual void setGameType(::GameType gameType) /*override*/;

    // vIndex: 9
    virtual int getGenerator() /*override*/;

    // vIndex: 10
    virtual bool getStartWithMap() /*override*/;

    // vIndex: 11
    virtual bool isAlwaysDay() /*override*/;

    // vIndex: 12
    virtual bool isGameRule(::GameRuleId gameRule) /*override*/;

    // vIndex: 13
    virtual bool isImmutableWorld() /*override*/;

    // vIndex: 14
    virtual ::std::unique_ptr<::PlayerCommandOrigin> makePlayerCommandOrigin() /*override*/;

    // vIndex: 15
    virtual void setCommandsEnabled(bool val) /*override*/;

    // vIndex: 16
    virtual void disableAchievements() /*override*/;

    // vIndex: 17
    virtual float getGuiScale() const /*override*/;

    // vIndex: 18
    virtual ::Vec2 getScreenSize() const /*override*/;

    // vIndex: 19
    virtual ::RectangleArea getSafeScreenZoneArea() const /*override*/;

    // vIndex: 20
    virtual ::RectangleArea getWYSIWYGSafeScreenZoneArea() const /*override*/;

    // vIndex: 21
    virtual ::RectangleArea getLayoutCustomizationSubPanelRectangle() const /*override*/;

    // vIndex: 22
    virtual ::RectangleArea getLayoutCustomizationMainPanelRectangle() const /*override*/;

    // vIndex: 23
    virtual ::RectangleArea getWYSIWYGBottomHudReservedArea() const /*override*/;

    // vIndex: 24
    virtual ::RectangleArea const& getHUDHotbarRectangle() const /*override*/;

    // vIndex: 25
    virtual ::Option const& getGuiScaleOption() const /*override*/;

    // vIndex: 26
    virtual void setGuiScaleOffset(int guiScale) /*override*/;

    // vIndex: 27
    virtual ::FontHandle getFontHandle() const /*override*/;

    // vIndex: 28
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

    MCNAPI void $setGameType(::GameType gameType);

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
