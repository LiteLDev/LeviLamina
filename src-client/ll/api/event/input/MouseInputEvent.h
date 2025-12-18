#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/input/InputEvent.h"

namespace ll::event::inline input {

class MouseInputEvent final : public Cancellable<InputEvent> {
    char&  mActionButtonId;
    schar& mButtonData;
    short& mX;
    short& mY;
    short& mDx;
    short& mDy;

public:
    constexpr explicit MouseInputEvent(
        char&  actionButtonId,
        schar& buttonData,
        short& x,
        short& y,
        short& dx,
        short& dy
    )
    : Cancellable(),
      mActionButtonId(actionButtonId),
      mButtonData(buttonData),
      mX(x),
      mY(y),
      mDx(dx),
      mDy(dy) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI char&  actionButtonId() const;
    LLNDAPI schar& buttonData() const;

    LLNDAPI short& x() const;
    LLNDAPI short& y() const;
    LLNDAPI short& dx() const;
    LLNDAPI short& dy() const;
};
} // namespace ll::event::inline input
