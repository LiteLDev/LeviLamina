#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextToSpeechClient {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechClient() = default;

    virtual void setTextToSpeechEnabled(bool) = 0;

    virtual bool getTextToSpeechEnabled() const = 0;

    virtual void setVolume(float, float) = 0;

    virtual void speakText(::std::string const&) = 0;

    virtual void stopSpeaking() = 0;

    virtual bool isIdle() const = 0;

    virtual bool supportsLanguage(::std::string const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
