#ifndef NBT_INTERNAL_HEAD_BFGUDYHGVWCEARSTYJGHI
#define NBT_INTERNAL_HEAD_BFGUDYHGVWCEARSTYJGHI

#include <nbt.hpp>

namespace nbt {

template <typename number_t>
constexpr std::size_t varnum_max() {
	return sizeof(number_t) * 8 / 7 + 1;
}

template <typename numeric>
constexpr std::enable_if_t<std::is_unsigned_v<numeric>, std::size_t> zint_max() {
	return varnum_max<numeric>();
}

template <typename numeric>
constexpr std::enable_if_t<std::is_signed_v<numeric>, std::size_t> zint_max() {
	return (sizeof(numeric) * 8 + 1) / 7 + ((sizeof(numeric) * 8 + 1) % 7 > 0);
}

template <typename number_t>
number_t load_varnum(std::istream & input) {
	std::size_t numRead = 0;
	number_t value = 0;
	int read;
    do {
        read = cheof(input);
        number_t tmp = static_cast<number_t>(read & 0b01111111);
		value |= (tmp << (7 * numRead));
        numRead++;
        if (numRead > varnum_max<number_t>())
            throw std::runtime_error("varint is too big");
    } while ((read & 0b10000000) != 0);
    return value;
}

template <typename number_t>
void dump_varnum(std::ostream & output, number_t value) {
	std::make_unsigned_t<number_t> uval = value;
	do {
		auto temp = static_cast<std::int8_t>(uval & 0b01111111u);
		uval >>= 7;
		if (uval != 0)
			temp |= 0b10000000;
		output.put(temp);
	} while (uval != 0);
}

template <typename numeric>
std::enable_if_t<std::is_unsigned_v<numeric>, numeric> load_zint(std::istream & input) {
	return load_varnum<numeric>(input);
}

template <typename numeric>
std::enable_if_t<std::is_signed_v<numeric>, numeric> load_zint(std::istream & input) {
    std::uint8_t read = cheof(input);
	bool sign = read & 1;
	numeric value = (read >> 1) & 0b00111111;
	unsigned numRead = 0;
    while ((read & 0b10000000) != 0) {
        read = cheof(input);
        numeric tmp = (read & 0b01111111);
		value |= (tmp << (7 * numRead + 6));
        ++numRead;
        if (numRead > zint_max<numeric>() - 1)
            throw std::runtime_error("szint is too big");
    }
	if (sign)
		return -value;
	else
		return value;
}

template <typename numeric>
std::enable_if_t<std::is_unsigned_v<numeric>> dump_zint(std::ostream & output, numeric value) {
	dump_varnum(output, value);
}

template <typename numeric>
std::enable_if_t<std::is_signed_v<numeric>> dump_zint(std::ostream & output, numeric value) {
	std::uint8_t sign = value < 0;
	std::make_unsigned_t<numeric> uval = sign ? -value : value;
	std::uint8_t temp = (static_cast<std::uint8_t>(uval & 0b00111111) << 1) | sign;
	uval >>= 6;
	if (uval != 0)
		temp |= 0b10000000;
	output.put(temp);
	while (uval != 0) {
		temp = static_cast<std::uint8_t>(uval & 0b01111111);
		uval >>= 7;
		if (uval != 0)
			temp |= 0b10000000;
		output.put(temp);
	}
}

} // namespace nbt

#endif // NBT_INTERNAL_HEAD_BFGUDYHGVWCEARSTYJGHI
