#pragma once

#include <cstdint>
#include <memory>
#include <string>

#include "../FakeGSL/span.h"
#include "../dll.h"

namespace mce {

class UUID {
public:
    std::uint64_t a = 0, b = 0;

    UUID() {
    }
    UUID(std::uint64_t a, std::uint64_t b)
        : a(a)
        , b(b) {
    }
    UUID(UUID const& rhs)
        : a(rhs.a)
        , b(rhs.b) {
    }

    constexpr inline bool operator==(UUID const& rhs) const noexcept {
        return a == rhs.a && b == rhs.b;
    }

    UUID& operator=(UUID const& rhs) {
        a = rhs.a;
        b = rhs.b;
        return *this;
    }

    inline operator char const *() const {
        return (char const*)this;
    }

    MCAPI std::string asString() const;
    MCAPI static UUID fromString(std::string const& source);
    MCAPI static UUID EMPTY;

    inline bool empty() const noexcept {
        return a == 0 && b == 0;
    }
};

class Blob {
public:
    std::unique_ptr<unsigned char[]> buffer;
    char                             pad[8];
    size_t                           length = 0;

    MCAPI Blob(void);
    MCAPI ~Blob(void);

    inline Blob(Blob&& rhs)
        : buffer(std::move(rhs.buffer))
        , length(rhs.length) {
        rhs.length = 0;
    }
    inline Blob(size_t input_length)
        : buffer(std::make_unique<unsigned char[]>(input_length))
        , length(input_length) {
    }
    inline Blob(unsigned char const* input, size_t input_length)
        : Blob(input_length) {
        memcpy(buffer.get(), input, input_length);
    }

    inline Blob& operator=(Blob&& rhs) {
        if (&rhs != this) {
            buffer     = std::move(rhs.buffer);
            length     = rhs.length;
            rhs.length = 0;
        }
        return *this;
    }

    inline Blob clone() const {
        return {data(), size()};
    }

    inline unsigned char* begin() {
        return buffer.get();
    }
    inline unsigned char* end() {
        return buffer.get() + length;
    }
    inline unsigned char const* cbegin() const {
        return buffer.get();
    }
    inline unsigned char const* cend() const {
        return buffer.get() + length;
    }

    inline unsigned char* data() {
        return buffer.get();
    }
    inline unsigned char const* data() const {
        return buffer.get();
    }

    inline bool empty() const {
        return length == 0;
    }
    inline size_t size() const {
        return length;
    }

    inline auto getSpan() const {
        return gsl::make_span(data(), size());
    }
};

static_assert(sizeof(Blob) == 24);

enum ImageFormat { NONE,
                   RGB,
                   RGBA };
enum ImageUsage : char {};

inline unsigned numChannels(ImageFormat format) {
    switch (format) {
        case RGB:
            return 3;
        case RGBA:
            return 4;
        default:
            return 0;
    }
}

class Image {
    inline Image(ImageFormat format, unsigned width, unsigned height, ImageUsage usage, Blob&& data)
        : format(format)
        , width(width)
        , height(height)
        , usage(usage)
        , data(std::move(data)) {
    }

public:
    ImageFormat format;
    unsigned    width, height;
    ImageUsage  usage;
    Blob        data;

    inline Image(Blob&& data)
        : data(std::move(data)) {
    }
    inline Image(unsigned width, unsigned height, ImageFormat format, ImageUsage usage)
        : format(format)
        , width(width)
        , height(height)
        , usage(usage) {
    }
    inline Image() {
    }

    inline Image& operator=(Image&& rhs) {
        format = rhs.format;
        width  = rhs.width;
        height = rhs.height;
        usage  = rhs.usage;
        data   = std::move(rhs.data);
        return *this;
    }

    inline Image clone() const {
        return {format, width, height, usage, data.clone()};
    }

    inline void copyRawImage(Blob const& blob) {
        data = blob.clone();
    }

    inline bool isEmpty() const {
        return data.empty();
    }

    inline void resizeImageBytesToFitImageDescription() {
        data = Blob{width * height * numChannels(format)};
    }

    inline void setImageDescription(unsigned width, unsigned height, ImageFormat format, ImageUsage usage) {
        this->width  = width;
        this->height = height;
        this->format = format;
        this->usage  = usage;
    }

    inline void setRawImage(Blob&& buffer) {
        data = std::move(buffer);
    }
};

static_assert(offsetof(Image, data) == 16);

} // namespace mce