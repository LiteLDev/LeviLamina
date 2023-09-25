#pragma once

#include "llapi/Global.h"
#include "../utils/RNG.h"
#include "VectorBase.hpp"

namespace mce {

class UUID {
    uint64_t a, b;

public:
    UUID() : a(RNG::rand<uint64_t>()), b(RNG::rand<uint64_t>()) {}

    UUID(uint64_t a, uint64_t b) : a(a), b(b) {}

    MCAPI std::string asString() const;
    MCAPI static UUID fromString(std::string const&);
    MCAPI bool isEmpty() const;
    MCAPI static UUID seedFromString(std::string const&);
    MCAPI static class mce::UUID EMPTY;

    inline operator bool() const {
        return !isEmpty();
    }
};

enum class ColorPalette {
    BLACK,
    INDIGO,
    LAVENDER,
    TEAL,
    COCOA,
    DARK,
    OATMEAL,
    WHITE,
    RED,
    APRICOT,
    YELLOW,
    GREEN,
    VATBLUE,
    SLATE,
    PINK,
    FAWN,
};

class Color : public VectorBase<Color, float, float, float, float> {
public:
    float r;
    float g;
    float b;
    float a;
    Color() : r(0.0f), g(0.0f), b(0.0f), a(0.0f){};
    Color(float r, float g, float b, float a = 1) : r(r), g(g), b(b), a(a){};
    Color(double r, double g, double b, double a = 1) : r((float)r), g((float)g), b((float)b), a((float)a){};
    Color(int ir, int ig, int ib, int ia = 255) : r(ir / 255.0f), g(ig / 255.0f), b(ib / 255.0f), a(ia / 255.0f){};

    LL_CONSTEXPR int static hexToNum(char s) {
        if ('A' <= s && s <= 'F') {
            return 10 + (s - 'A');
        }
        if ('a' <= s && s <= 'f') {
            return 10 + (s - 'a');
        }
        if ('0' <= s && s <= '9') {
            return (s - '0');
        }
        return 0;
    }

    LL_CONSTEXPR double static hexToNum(std::string_view s) {
        if (s.length() == 2) {
            return (16 * hexToNum(s[0]) + hexToNum(s[1])) / 255.0;
        }
        return 0;
    }

    LL_CONSTEXPR Color(std::string_view hex) {
        r = 0, g = 0, b = 0, a = 1;
        if (hex[0] == '#') {
            hex = hex.substr(1);
        }
        if (hex.length() == 3) {
            r = (float)((hexToNum(hex[0]) * 17) / 255.0);
            g = (float)((hexToNum(hex[1]) * 17) / 255.0);
            b = (float)((hexToNum(hex[2]) * 17) / 255.0);
            return;
        }
        if (hex.length() == 4) {
            a = (float)((hexToNum(hex[0]) * 17) / 255.0);
            r = (float)((hexToNum(hex[1]) * 17) / 255.0);
            g = (float)((hexToNum(hex[2]) * 17) / 255.0);
            b = (float)((hexToNum(hex[3]) * 17) / 255.0);
            return;
        }
        if (hex.length() == 6) {
            r = (float)hexToNum(hex.substr(0, 2));
            g = (float)hexToNum(hex.substr(2, 2));
            b = (float)hexToNum(hex.substr(4, 2));
            return;
        }
        if (hex.length() == 8) {
            a = (float)hexToNum(hex.substr(0, 2));
            r = (float)hexToNum(hex.substr(2, 2));
            g = (float)hexToNum(hex.substr(4, 2));
            b = (float)hexToNum(hex.substr(6, 2));
            return;
        }
        return;
    };

    inline operator bool() const {
        return !(*this == NIL);
    }

    LIAPI double distanceTo(mce::Color const& dst) const;
    LIAPI std::string toConsoleCode(bool foreground = true) const;
    LIAPI std::string toNearestColorCode() const;
    LIAPI char toNearestParticleColorCode() const;
    LIAPI ColorPalette toNearestParticleColorType() const;
    LIAPI static class mce::Color fromConsoleCode(std::string const&);
    LIAPI static class mce::Color fromColorCode(std::string const&);
    LIAPI class mce::Color sRGBToLinear() const;
    LIAPI class mce::Color LinearTosRGB() const;
    LIAPI class mce::Color LinearToXYZ() const;
    LIAPI class mce::Color XYZToLinear() const;
    LIAPI class mce::Color XYZToLab() const;
    LIAPI class mce::Color LabToXYZ() const;
    LIAPI double deltaE76(mce::Color const& dst) const; // 2.3 for JND
    LIAPI double deltaE94(mce::Color const& dst) const; // 1.0 for JND
    LIAPI double deltaE00(mce::Color const& dst) const; // 1.0 for JND

    MCAPI static mce::Color const NIL;
    MCAPI static class mce::Color fromHexString(std::string const&);
    MCAPI bool operator==(class mce::Color const&) const;
    MCAPI int toABGR(void) const;
    MCAPI int toARGB(void) const;
    MCAPI std::string toHexString(void) const;

    inline bool operator!=(const Color& c) const {
        return !(c == *this);
    }

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) {
        switch (index) {
            case 1:
                return g;
            case 2:
                return b;
            case 3:
                return a;
            default:
                return r;
        }
    }

    template <typename T>
    [[nodiscard]] constexpr T get(size_t index) const {
        switch (index) {
            case 1:
                return g;
            case 2:
                return b;
            case 3:
                return a;
            default:
                return r;
        }
    }

    inline static Color lerp(const Color& k, const Color& l, float m) {
        return k * (1.0f - m) + l * m;
    }

    inline static Color mix(const Color& k, const Color& l, float m) {
        return lerp(k, l, m);
    }
};

static std::unordered_map<ColorPalette, std::pair<char, Color>> const particleColors = {
    // clang-format off
        {mce::ColorPalette::BLACK,    {'B', Color("#000000")}},
        {mce::ColorPalette::INDIGO,   {'I', Color("#144A74")}},
        {mce::ColorPalette::LAVENDER, {'L', Color("#8E65F3")}},
        {mce::ColorPalette::TEAL,     {'T', Color("#07946E")}},
        {mce::ColorPalette::COCOA,    {'C', Color("#AB5236")}},
        {mce::ColorPalette::DARK,     {'D', Color("#56575F")}},
        {mce::ColorPalette::OATMEAL,  {'O', Color("#A2A3A7")}},
        {mce::ColorPalette::WHITE,    {'W', Color("#FFFFFF")}},
        {mce::ColorPalette::RED,      {'R', Color("#FF3040")}},
        {mce::ColorPalette::APRICOT,  {'A', Color("#FF7300")}},
        {mce::ColorPalette::YELLOW,   {'Y', Color("#FFEC27")}},
        {mce::ColorPalette::GREEN,    {'G', Color("#10E436")}},
        {mce::ColorPalette::VATBLUE,  {'V', Color("#29ADFF")}},
        {mce::ColorPalette::SLATE,    {'S', Color("#83769C")}},
        {mce::ColorPalette::PINK,     {'P', Color("#FF77A8")}},
        {mce::ColorPalette::FAWN,     {'E', Color("#FFCCAA")}},
    // clang-format on
};

inline static const char getParticleColorType(ColorPalette const& p) {
    return particleColors.at(p).first;
}

enum class ImageFormat : __int32
{
  Unknown = 0x0,
  R8Unorm = 0x1,
  RGB8Unorm = 0x2,
  RGBA8Unorm = 0x3,
};

enum class ImageUsage : unsigned char {
	Unknown = 0x0,
	sRGB = 0x1,
	Data = 0x2,
};


class Blob {
public:
    void* unk0;
    std::unique_ptr<unsigned char[]> mBlob;
    size_t mSize = 0;

    inline Blob() {}

    inline Blob(Blob&& rhs) : mBlob(std::move(rhs.mBlob)), mSize(rhs.mSize) {
        rhs.mSize = 0;
    }

    inline Blob(size_t input_length) : mBlob(std::make_unique<unsigned char[]>(input_length)), mSize(input_length) {}

    inline Blob(unsigned char const* input, size_t input_length) : Blob(input_length) {
        memcpy(mBlob.get(), input, input_length);
    }

    inline Blob& operator=(Blob&& rhs) {
        if (&rhs != this) {
            mBlob = std::move(rhs.mBlob);
            mSize = rhs.mSize;
            rhs.mSize = 0;
        }
        return *this;
    }

    inline Blob clone() const {
        return {data(), size()};
    }

    inline unsigned char* begin() {
        return mBlob.get();
    }

    inline unsigned char* end() {
        return mBlob.get() + mSize;
    }

    inline unsigned char const* cbegin() const {
        return mBlob.get();
    }

    inline unsigned char const* cend() const {
        return mBlob.get() + mSize;
    }

    inline unsigned char* data() {
        return mBlob.get();
    }

    inline unsigned char const* data() const {
        return mBlob.get();
    }

    inline bool empty() const {
        return mSize == 0;
    }

    inline size_t size() const {
        return mSize;
    }

    inline auto getSpan() const {
        return gsl::make_span(data(), size());
    }
};

inline unsigned numChannels(ImageFormat format) {
    switch (format) {
    case ImageFormat::R8Unorm:
        return 3;
    case ImageFormat::RGB8Unorm:
        return 4;
    default:
        return 0;
    }
}


struct Image {
    inline Image(ImageFormat format, unsigned width, unsigned height, ImageUsage usage, Blob&& data)
        : imageFormat(format), mWidth(width), mHeight(height), mUsage(usage), mImageBytes(std::move(data)) {}

public:
    ImageFormat imageFormat{};       // 0x0
    uint32_t mWidth{}, mHeight{}; // 0x4, 0x8
    ImageUsage mUsage{};         // 0xC
    Blob mImageBytes;                  // 0x10
   

    inline Image(Blob&& data) : mImageBytes(std::move(data)) {}

    inline Image(unsigned width, unsigned height, ImageFormat format, ImageUsage usage)
        : imageFormat(format), mWidth(width), mHeight(height), mUsage(usage) {}

    inline Image() {}

    inline Image& operator=(Image&& rhs) {
        imageFormat = rhs.imageFormat;
        mWidth = rhs.mWidth;
        mHeight = rhs.mHeight;
        mUsage = rhs.mUsage;
        mImageBytes = std::move(rhs.mImageBytes);
        return *this;
    }

    inline Image clone() const {
        return { imageFormat, mWidth, mHeight, mUsage, mImageBytes.clone() };
    }

    inline void copyRawImage(Blob const& blob) {
        mImageBytes = blob.clone();
    }

    inline bool isEmpty() const {
        return mImageBytes.empty();
    }

    inline void resizeImageBytesToFitImageDescription() {
        mImageBytes = Blob{ mWidth * mHeight * numChannels(imageFormat) };
    }

    inline void setImageDescription(unsigned width, unsigned height, ImageFormat format, ImageUsage usage) {
        this->mWidth = width;
        this->mHeight = height;
        this->imageFormat = format;
        this->mUsage = usage;
    }

    inline void setRawImage(Blob&& buffer) {
        mImageBytes = std::move(buffer);
    }

    Image(const Image& a1) {
        imageFormat = a1.imageFormat;
        mWidth = a1.mWidth;
        mHeight = a1.mHeight;
        mUsage = a1.mUsage;
        mImageBytes = a1.mImageBytes.clone();
    }
};


}; // namespace mce

namespace std {

template <>
struct hash<mce::Color> {
    std::size_t operator()(mce::Color const& c) const noexcept {
        return c.hash();
    }
};

} // namespace std