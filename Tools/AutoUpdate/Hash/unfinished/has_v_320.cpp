/*
 *  Chocobo1/Hash
 *
 *   Copyright 2017-2018 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#include "has_v_320.h"

#include <algorithm>
#include <cassert>
#include <cmath>
#include <type_traits>


namespace
{
	template <typename T>
	class Loader
	{
		// this class workaround loading data from unaligned memory boundaries
		// also eliminate endianness issues
		public:
			explicit constexpr Loader(const void *ptr)
				: m_ptr(static_cast<const uint8_t *>(ptr))
			{
			}

			constexpr T operator[](const size_t idx) const
			{
				static_assert(std::is_same<T, uint32_t>::value, "");
				// handle specific endianness here
				const uint8_t *ptr = m_ptr + (sizeof(T) * idx);
				return  ( (static_cast<T>(*(ptr + 0)) <<  0)
						| (static_cast<T>(*(ptr + 1)) <<  8)
						| (static_cast<T>(*(ptr + 2)) << 16)
						| (static_cast<T>(*(ptr + 3)) << 24));
			}

		private:
			const uint8_t *m_ptr;
	};

	template <typename R, typename T>
	constexpr R ror(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<R>::value, "");
		const R mask = -1;
		return ((x >> s) & mask);
	}

	template <typename T>
	constexpr T rotl(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<T>::value, "");
		if (s == 0)
			return x;
		return ((x << s) | (x >> ((sizeof(T) * 8) - s)));
	}
}


HAS_V_320::HAS_V_320()
{
	m_buffer.reserve(BLOCK_SIZE * 2);  // x2 for paddings
	reset();
}

void HAS_V_320::reset()
{
	m_buffer.clear();
	m_sizeCounter = 0;

	m_h[0] = 0x67452301;
	m_h[1] = 0xEFCDAB89;
	m_h[2] = 0x98BADCFE;
	m_h[3] = 0x10325476;
	m_h[4] = 0xC3D2E1F0;
	m_h[5] = 0x8796A5B4;
	m_h[6] = 0x4B5A6978;
	m_h[7] = 0x0F1E2D3C;
	m_h[8] = 0xA0B1C2D3;
	m_h[9] = 0x68794E5F;
}

HAS_V_320& HAS_V_320::finalize()
{
	m_sizeCounter += m_buffer.size();

	// append 1 bit
	m_buffer.emplace_back(1 << 7);

	// append paddings
	const auto len = static_cast<int>(((2 * BLOCK_SIZE) - (m_buffer.size() + 9)) % BLOCK_SIZE);
	m_buffer.insert(m_buffer.end(), (len + 9), 0);

	// append result length in bytes
	m_buffer[m_buffer.size() - 9] = (320 / 8);

	// append size in bits
	const uint64_t sizeCounterBits = m_sizeCounter * 8;
	const uint32_t sizeCounterBitsL = ror<uint32_t>(sizeCounterBits, 0);
	const uint32_t sizeCounterBitsH = ror<uint32_t>(sizeCounterBits, 32);
	for (int i = 0; i < 4; ++i)
	{
		m_buffer[m_buffer.size() - 8 + i] = ror<Byte>(sizeCounterBitsL, (8 * i));
		m_buffer[m_buffer.size() - 4 + i] = ror<Byte>(sizeCounterBitsH, (8 * i));
	}

	addDataImpl(m_buffer);
	m_buffer.clear();

	return (*this);
}

std::string HAS_V_320::toString() const
{
	const auto a = toArray();
	std::string ret;
	ret.reserve(2 * a.size());
	for (const auto c : a)
	{
		char buf[3];
		snprintf(buf, sizeof(buf), "%02x", c);
		ret.append(buf);
	}

	return ret;
}

std::vector<HAS_V_320::Byte> HAS_V_320::toVector() const
{
	const auto a = toArray();
	return {a.begin(), a.end()};
}

HAS_V_320::ResultArrayType HAS_V_320::toArray() const
{
	const Span<const uint32_t> state(m_h);
	const int dataSize = sizeof(decltype(state)::value_type);

	int retCounter = 0;
	ResultArrayType ret;
	for (const auto &i : state)
	{
		for (int j = 0; j < dataSize; ++j)
			ret[retCounter++] = ror<Byte>(i, (j * 8));
	}

	return ret;
}

HAS_V_320& HAS_V_320::addData(const Span<const Byte> inData)
{
	Span<const Byte> data = inData;

	if (!m_buffer.empty())
	{
		const size_t len = std::min<size_t>((BLOCK_SIZE - m_buffer.size()), data.size());  // try fill to BLOCK_SIZE bytes
		m_buffer.insert(m_buffer.end(), data.begin(), data.begin() + len);

		if (m_buffer.size() < BLOCK_SIZE)  // still doesn't fill the buffer
			return (*this);

		addDataImpl(m_buffer);
		m_buffer.clear();

		data = data.subspan(len);
	}

	const size_t dataSize = data.size();
	if (dataSize < BLOCK_SIZE)
	{
		m_buffer = {data.begin(), data.end()};
		return (*this);
	}

	const size_t len = dataSize - (dataSize % BLOCK_SIZE);  // align on BLOCK_SIZE bytes
	addDataImpl(data.first(len));

	if (len < dataSize)  // didn't consume all data
		m_buffer = {data.begin() + len, data.end()};

	return (*this);
}

HAS_V_320& HAS_V_320::addData(const void *ptr, const long int length)
{
	// gsl::span::index_type = long int
	return addData({static_cast<const Byte*>(ptr), length});
}

void HAS_V_320::addDataImpl(const Span<const Byte> data)
{
	assert((data.size() % BLOCK_SIZE) == 0);

	m_sizeCounter += data.size();

	for (size_t iter = 0, iend = static_cast<size_t>(data.size() / BLOCK_SIZE); iter < iend; ++iter)
	{
		const Loader<uint32_t> x(static_cast<const Byte *>(data.data() + (iter * BLOCK_SIZE)));

		static const unsigned int sTable[20] =
		{
			5, 11, 7, 13, 15, 6, 13, 9, 5, 11, 7, 12, 8, 15, 13, 8, 15, 6, 7, 14
		};
		static const unsigned int mTable[100] =
		{
			18,  0, 1,  2,  3, 19,  4,  5, 6,  7, 16,  8,  9, 10, 11, 17, 12, 13, 14, 15,
			18,  3, 6,  9, 12, 19, 15,  2, 5,  8, 16, 11, 14,  1,  4, 17,  7, 10, 13,  0,
			18, 12, 5, 14,  7, 19,  0,  9, 2, 11, 16,  4, 13,  6, 15, 17,  8,  1, 10,  3,
			18,  7, 2, 13,  8, 19,  3, 14, 9,  4, 16, 15, 10,  5,  0, 17, 11,  6,  1, 12,
			18, 15, 9,  5,  3, 19, 12,  8, 6,  2, 16, 13, 11,  7,  1, 17, 14, 10,  4,  0
		};

		constexpr auto f0 = [](const uint32_t x, const uint32_t y, const uint32_t z, const uint32_t u) -> uint32_t
		{
			return (x & y) ^ ((~x) & z) ^ (y & u) ^ (z & u);
		};
		constexpr auto f1 = [](const uint32_t x, const uint32_t y, const uint32_t z, const uint32_t u) -> uint32_t
		{
			return (x & z) ^ y ^ u;
		};
		constexpr auto f2 = [](const uint32_t x, const uint32_t y, const uint32_t z, const uint32_t u) -> uint32_t
		{
			return (x & y) ^ ((~x) & u) ^ z;
		};
		const auto f3 = [&f1](const uint32_t x, const uint32_t y, const uint32_t z, const uint32_t u) -> uint32_t
		{
			return f1(y, x, z, u);
		};
		const auto f4 = [&f0](const uint32_t x, const uint32_t y, const uint32_t z, const uint32_t u) -> uint32_t
		{
			return f0(x, z, y, u);
		};


		uint32_t xTable[20];
		uint32_t yTable[20];
		for (int i = 0; i < 16; ++i)
		{
			xTable[i] = x[ 0 + i];
			yTable[i] = x[16 + i];
		}

		constexpr auto extendTable = [](uint32_t *table, const unsigned int round) -> void
		{
			static const unsigned int lut[5][16] =
			{
				{ 0, 1,  2,  3,  4,  5, 6,  7,  8,  9, 10, 11, 12, 13, 14, 15},
				{ 3, 6,  9, 12, 15,  2, 5,  8, 11, 14,  1,  4,  7, 10, 13,  0},
				{12, 5, 14,  7,  0,  9, 2, 11,  4, 13,  6, 15,  8,  1, 10,  3},
				{ 7, 2, 13,  8,  3, 14, 9,  4, 15, 10,  5,  0, 11,  6,  1, 12},
				{15, 9,  5,  3, 12,  8, 6,  2, 13, 11,  7,  1, 14, 10,  4,  0}
			};

			const auto *l = lut[round];
			table[16] = table[l[ 0]] ^ table[l[ 1]] ^ table[l[ 2]] ^ table[l[ 3]];
			table[17] = table[l[ 4]] ^ table[l[ 5]] ^ table[l[ 6]] ^ table[l[ 7]];
			table[18] = table[l[ 8]] ^ table[l[ 9]] ^ table[l[10]] ^ table[l[11]];
			table[19] = table[l[12]] ^ table[l[13]] ^ table[l[14]] ^ table[l[15]];
		};



		uint32_t a = m_h[0];
		uint32_t b = m_h[1];
		uint32_t c = m_h[2];
		uint32_t d = m_h[3];
		uint32_t e = m_h[4];
		const auto lineLeft = [&xTable](uint32_t &a, uint32_t &b, uint32_t &c, uint32_t &d, uint32_t &e, const auto &f, const uint32_t k, const unsigned int j) -> void
		{
			e = rotl(a, sTable[j % 20]) + f(b, c, d, e) + xTable[mTable[j]] + k;
			b = rotl(b, 30);
		};

		uint32_t f = m_h[5];
		uint32_t g = m_h[6];
		uint32_t h = m_h[7];
		uint32_t i = m_h[8];
		uint32_t j = m_h[9];
		const auto &lineRight = [&yTable](uint32_t &a, uint32_t &b, uint32_t &c, uint32_t &d, uint32_t &e, const auto &f, const uint32_t k, const unsigned int j) -> void
		{
			e = rotl(a, sTable[j % 20]) + f(b, c, d, e) + yTable[mTable[j]] + k;
			b = rotl(b, 30);
		};

		const auto swapChainVars = [&a, &b, &c, &d, &e, &f, &g, &h, &i, &j]() -> void
		{
			std::swap(a, f);
			std::swap(b, g);
			std::swap(c, h);
			std::swap(d, i);
			std::swap(e, j);
		};


#if 0

{
		extendTable(xTable, 0);
		lineLeft(a, b, c, d, e, f0, 0x00000000, 0);
		lineLeft(e, a, b, c, d, f0, 0x00000000, 1);
		lineLeft(d, e, a, b, c, f0, 0x00000000, 2);
		lineLeft(c, d, e, a, b, f0, 0x00000000, 3);
		lineLeft(b, c, d, e, a, f0, 0x00000000, 4);
		lineLeft(a, b, c, d, e, f0, 0x00000000, 5);
		lineLeft(e, a, b, c, d, f0, 0x00000000, 6);
		lineLeft(d, e, a, b, c, f0, 0x00000000, 7);
		lineLeft(c, d, e, a, b, f0, 0x00000000, 8);
		lineLeft(b, c, d, e, a, f0, 0x00000000, 9);
		lineLeft(a, b, c, d, e, f0, 0x00000000, 10);
		lineLeft(e, a, b, c, d, f0, 0x00000000, 11);
		lineLeft(d, e, a, b, c, f0, 0x00000000, 12);
		lineLeft(c, d, e, a, b, f0, 0x00000000, 13);
		lineLeft(b, c, d, e, a, f0, 0x00000000, 14);
		lineLeft(a, b, c, d, e, f0, 0x00000000, 15);
		lineLeft(e, a, b, c, d, f0, 0x00000000, 16);
		lineLeft(d, e, a, b, c, f0, 0x00000000, 17);
		lineLeft(c, d, e, a, b, f0, 0x00000000, 18);
		lineLeft(b, c, d, e, a, f0, 0x00000000, 19);

		extendTable(yTable, 1);
		lineRight(a, b, c, d, e, f3, 0x8F1BBCDC, 20);
		lineRight(e, a, b, c, d, f3, 0x8F1BBCDC, 21);
		lineRight(d, e, a, b, c, f3, 0x8F1BBCDC, 22);
		lineRight(c, d, e, a, b, f3, 0x8F1BBCDC, 23);
		lineRight(b, c, d, e, a, f3, 0x8F1BBCDC, 24);
		lineRight(a, b, c, d, e, f3, 0x8F1BBCDC, 25);
		lineRight(e, a, b, c, d, f3, 0x8F1BBCDC, 26);
		lineRight(d, e, a, b, c, f3, 0x8F1BBCDC, 27);
		lineRight(c, d, e, a, b, f3, 0x8F1BBCDC, 28);
		lineRight(b, c, d, e, a, f3, 0x8F1BBCDC, 29);
		lineRight(a, b, c, d, e, f3, 0x8F1BBCDC, 30);
		lineRight(e, a, b, c, d, f3, 0x8F1BBCDC, 31);
		lineRight(d, e, a, b, c, f3, 0x8F1BBCDC, 32);
		lineRight(c, d, e, a, b, f3, 0x8F1BBCDC, 33);
		lineRight(b, c, d, e, a, f3, 0x8F1BBCDC, 34);
		lineRight(a, b, c, d, e, f3, 0x8F1BBCDC, 35);
		lineRight(e, a, b, c, d, f3, 0x8F1BBCDC, 36);
		lineRight(d, e, a, b, c, f3, 0x8F1BBCDC, 37);
		lineRight(c, d, e, a, b, f3, 0x8F1BBCDC, 38);
		lineRight(b, c, d, e, a, f3, 0x8F1BBCDC, 39);

		extendTable(xTable, 2);
		lineLeft(a, b, c, d, e, f2, 0x6ED9EBA1, 40);
		lineLeft(e, a, b, c, d, f2, 0x6ED9EBA1, 41);
		lineLeft(d, e, a, b, c, f2, 0x6ED9EBA1, 42);
		lineLeft(c, d, e, a, b, f2, 0x6ED9EBA1, 43);
		lineLeft(b, c, d, e, a, f2, 0x6ED9EBA1, 44);
		lineLeft(a, b, c, d, e, f2, 0x6ED9EBA1, 45);
		lineLeft(e, a, b, c, d, f2, 0x6ED9EBA1, 46);
		lineLeft(d, e, a, b, c, f2, 0x6ED9EBA1, 47);
		lineLeft(c, d, e, a, b, f2, 0x6ED9EBA1, 48);
		lineLeft(b, c, d, e, a, f2, 0x6ED9EBA1, 49);
		lineLeft(a, b, c, d, e, f2, 0x6ED9EBA1, 50);
		lineLeft(e, a, b, c, d, f2, 0x6ED9EBA1, 51);
		lineLeft(d, e, a, b, c, f2, 0x6ED9EBA1, 52);
		lineLeft(c, d, e, a, b, f2, 0x6ED9EBA1, 53);
		lineLeft(b, c, d, e, a, f2, 0x6ED9EBA1, 54);
		lineLeft(a, b, c, d, e, f2, 0x6ED9EBA1, 55);
		lineLeft(e, a, b, c, d, f2, 0x6ED9EBA1, 56);
		lineLeft(d, e, a, b, c, f2, 0x6ED9EBA1, 57);
		lineLeft(c, d, e, a, b, f2, 0x6ED9EBA1, 58);
		lineLeft(b, c, d, e, a, f2, 0x6ED9EBA1, 59);

		extendTable(yTable, 3);
		lineRight(a, b, c, d, e, f1, 0x5A827999, 60);
		lineRight(e, a, b, c, d, f1, 0x5A827999, 61);
		lineRight(d, e, a, b, c, f1, 0x5A827999, 62);
		lineRight(c, d, e, a, b, f1, 0x5A827999, 63);
		lineRight(b, c, d, e, a, f1, 0x5A827999, 64);
		lineRight(a, b, c, d, e, f1, 0x5A827999, 65);
		lineRight(e, a, b, c, d, f1, 0x5A827999, 66);
		lineRight(d, e, a, b, c, f1, 0x5A827999, 67);
		lineRight(c, d, e, a, b, f1, 0x5A827999, 68);
		lineRight(b, c, d, e, a, f1, 0x5A827999, 69);
		lineRight(a, b, c, d, e, f1, 0x5A827999, 70);
		lineRight(e, a, b, c, d, f1, 0x5A827999, 71);
		lineRight(d, e, a, b, c, f1, 0x5A827999, 72);
		lineRight(c, d, e, a, b, f1, 0x5A827999, 73);
		lineRight(b, c, d, e, a, f1, 0x5A827999, 74);
		lineRight(a, b, c, d, e, f1, 0x5A827999, 75);
		lineRight(e, a, b, c, d, f1, 0x5A827999, 76);
		lineRight(d, e, a, b, c, f1, 0x5A827999, 77);
		lineRight(c, d, e, a, b, f1, 0x5A827999, 78);
		lineRight(b, c, d, e, a, f1, 0x5A827999, 79);

		extendTable(xTable, 4);
		lineLeft(a, b, c, d, e, f4, 0xA953FD4E, 80);
		lineLeft(e, a, b, c, d, f4, 0xA953FD4E, 81);
		lineLeft(d, e, a, b, c, f4, 0xA953FD4E, 82);
		lineLeft(c, d, e, a, b, f4, 0xA953FD4E, 83);
		lineLeft(b, c, d, e, a, f4, 0xA953FD4E, 84);
		lineLeft(a, b, c, d, e, f4, 0xA953FD4E, 85);
		lineLeft(e, a, b, c, d, f4, 0xA953FD4E, 86);
		lineLeft(d, e, a, b, c, f4, 0xA953FD4E, 87);
		lineLeft(c, d, e, a, b, f4, 0xA953FD4E, 88);
		lineLeft(b, c, d, e, a, f4, 0xA953FD4E, 89);
		lineLeft(a, b, c, d, e, f4, 0xA953FD4E, 90);
		lineLeft(e, a, b, c, d, f4, 0xA953FD4E, 91);
		lineLeft(d, e, a, b, c, f4, 0xA953FD4E, 92);
		lineLeft(c, d, e, a, b, f4, 0xA953FD4E, 93);
		lineLeft(b, c, d, e, a, f4, 0xA953FD4E, 94);
		lineLeft(a, b, c, d, e, f4, 0xA953FD4E, 95);
		lineLeft(e, a, b, c, d, f4, 0xA953FD4E, 96);
		lineLeft(d, e, a, b, c, f4, 0xA953FD4E, 97);
		lineLeft(c, d, e, a, b, f4, 0xA953FD4E, 98);
		lineLeft(b, c, d, e, a, f4, 0xA953FD4E, 99);


////

		extendTable(yTable, 0);
		lineRight(f, g, h, i, j, f4, 0xA953FD4E, 0);
		lineRight(j, f, g, h, i, f4, 0xA953FD4E, 1);
		lineRight(i, j, f, g, h, f4, 0xA953FD4E, 2);
		lineRight(h, i, j, f, g, f4, 0xA953FD4E, 3);
		lineRight(g, h, i, j, f, f4, 0xA953FD4E, 4);
		lineRight(f, g, h, i, j, f4, 0xA953FD4E, 5);
		lineRight(j, f, g, h, i, f4, 0xA953FD4E, 6);
		lineRight(i, j, f, g, h, f4, 0xA953FD4E, 7);
		lineRight(h, i, j, f, g, f4, 0xA953FD4E, 8);
		lineRight(g, h, i, j, f, f4, 0xA953FD4E, 9);
		lineRight(f, g, h, i, j, f4, 0xA953FD4E, 10);
		lineRight(j, f, g, h, i, f4, 0xA953FD4E, 11);
		lineRight(i, j, f, g, h, f4, 0xA953FD4E, 12);
		lineRight(h, i, j, f, g, f4, 0xA953FD4E, 13);
		lineRight(g, h, i, j, f, f4, 0xA953FD4E, 14);
		lineRight(f, g, h, i, j, f4, 0xA953FD4E, 15);
		lineRight(j, f, g, h, i, f4, 0xA953FD4E, 16);
		lineRight(i, j, f, g, h, f4, 0xA953FD4E, 17);
		lineRight(h, i, j, f, g, f4, 0xA953FD4E, 18);
		lineRight(g, h, i, j, f, f4, 0xA953FD4E, 19);



		extendTable(xTable, 1);
		lineLeft(f, g, h, i, j, f1, 0x5A827999, 20);
		lineLeft(j, f, g, h, i, f1, 0x5A827999, 21);
		lineLeft(i, j, f, g, h, f1, 0x5A827999, 22);
		lineLeft(h, i, j, f, g, f1, 0x5A827999, 23);
		lineLeft(g, h, i, j, f, f1, 0x5A827999, 24);
		lineLeft(f, g, h, i, j, f1, 0x5A827999, 25);
		lineLeft(j, f, g, h, i, f1, 0x5A827999, 26);
		lineLeft(i, j, f, g, h, f1, 0x5A827999, 27);
		lineLeft(h, i, j, f, g, f1, 0x5A827999, 28);
		lineLeft(g, h, i, j, f, f1, 0x5A827999, 29);
		lineLeft(f, g, h, i, j, f1, 0x5A827999, 30);
		lineLeft(j, f, g, h, i, f1, 0x5A827999, 31);
		lineLeft(i, j, f, g, h, f1, 0x5A827999, 32);
		lineLeft(h, i, j, f, g, f1, 0x5A827999, 33);
		lineLeft(g, h, i, j, f, f1, 0x5A827999, 34);
		lineLeft(f, g, h, i, j, f1, 0x5A827999, 35);
		lineLeft(j, f, g, h, i, f1, 0x5A827999, 36);
		lineLeft(i, j, f, g, h, f1, 0x5A827999, 37);
		lineLeft(h, i, j, f, g, f1, 0x5A827999, 38);
		lineLeft(g, h, i, j, f, f1, 0x5A827999, 39);


		extendTable(yTable, 2);
		lineRight(f, g, h, i, j, f2, 0x00000000, 40);
		lineRight(j, f, g, h, i, f2, 0x00000000, 41);
		lineRight(i, j, f, g, h, f2, 0x00000000, 42);
		lineRight(h, i, j, f, g, f2, 0x00000000, 43);
		lineRight(g, h, i, j, f, f2, 0x00000000, 44);
		lineRight(f, g, h, i, j, f2, 0x00000000, 45);
		lineRight(j, f, g, h, i, f2, 0x00000000, 46);
		lineRight(i, j, f, g, h, f2, 0x00000000, 47);
		lineRight(h, i, j, f, g, f2, 0x00000000, 48);
		lineRight(g, h, i, j, f, f2, 0x00000000, 49);
		lineRight(f, g, h, i, j, f2, 0x00000000, 50);
		lineRight(j, f, g, h, i, f2, 0x00000000, 51);
		lineRight(i, j, f, g, h, f2, 0x00000000, 52);
		lineRight(h, i, j, f, g, f2, 0x00000000, 53);
		lineRight(g, h, i, j, f, f2, 0x00000000, 54);
		lineRight(f, g, h, i, j, f2, 0x00000000, 55);
		lineRight(j, f, g, h, i, f2, 0x00000000, 56);
		lineRight(i, j, f, g, h, f2, 0x00000000, 57);
		lineRight(h, i, j, f, g, f2, 0x00000000, 58);
		lineRight(g, h, i, j, f, f2, 0x00000000, 59);


		extendTable(xTable, 3);
		lineLeft(f, g, h, i, j, f3, 0x8F1BBCDC, 60);
		lineLeft(j, f, g, h, i, f3, 0x8F1BBCDC, 61);
		lineLeft(i, j, f, g, h, f3, 0x8F1BBCDC, 62);
		lineLeft(h, i, j, f, g, f3, 0x8F1BBCDC, 63);
		lineLeft(g, h, i, j, f, f3, 0x8F1BBCDC, 64);
		lineLeft(f, g, h, i, j, f3, 0x8F1BBCDC, 65);
		lineLeft(j, f, g, h, i, f3, 0x8F1BBCDC, 66);
		lineLeft(i, j, f, g, h, f3, 0x8F1BBCDC, 67);
		lineLeft(h, i, j, f, g, f3, 0x8F1BBCDC, 68);
		lineLeft(g, h, i, j, f, f3, 0x8F1BBCDC, 69);
		lineLeft(f, g, h, i, j, f3, 0x8F1BBCDC, 70);
		lineLeft(j, f, g, h, i, f3, 0x8F1BBCDC, 71);
		lineLeft(i, j, f, g, h, f3, 0x8F1BBCDC, 72);
		lineLeft(h, i, j, f, g, f3, 0x8F1BBCDC, 73);
		lineLeft(g, h, i, j, f, f3, 0x8F1BBCDC, 74);
		lineLeft(f, g, h, i, j, f3, 0x8F1BBCDC, 75);
		lineLeft(j, f, g, h, i, f3, 0x8F1BBCDC, 76);
		lineLeft(i, j, f, g, h, f3, 0x8F1BBCDC, 77);
		lineLeft(h, i, j, f, g, f3, 0x8F1BBCDC, 78);
		lineLeft(g, h, i, j, f, f3, 0x8F1BBCDC, 79);



		extendTable(yTable, 4);
		lineRight(f, g, h, i, j, f0, 0x6ED9EBA1, 80);
		lineRight(j, f, g, h, i, f0, 0x6ED9EBA1, 81);
		lineRight(i, j, f, g, h, f0, 0x6ED9EBA1, 82);
		lineRight(h, i, j, f, g, f0, 0x6ED9EBA1, 83);
		lineRight(g, h, i, j, f, f0, 0x6ED9EBA1, 84);
		lineRight(f, g, h, i, j, f0, 0x6ED9EBA1, 85);
		lineRight(j, f, g, h, i, f0, 0x6ED9EBA1, 86);
		lineRight(i, j, f, g, h, f0, 0x6ED9EBA1, 87);
		lineRight(h, i, j, f, g, f0, 0x6ED9EBA1, 88);
		lineRight(g, h, i, j, f, f0, 0x6ED9EBA1, 89);
		lineRight(f, g, h, i, j, f0, 0x6ED9EBA1, 90);
		lineRight(j, f, g, h, i, f0, 0x6ED9EBA1, 91);
		lineRight(i, j, f, g, h, f0, 0x6ED9EBA1, 92);
		lineRight(h, i, j, f, g, f0, 0x6ED9EBA1, 93);
		lineRight(g, h, i, j, f, f0, 0x6ED9EBA1, 94);
		lineRight(f, g, h, i, j, f0, 0x6ED9EBA1, 95);
		lineRight(j, f, g, h, i, f0, 0x6ED9EBA1, 96);
		lineRight(i, j, f, g, h, f0, 0x6ED9EBA1, 97);
		lineRight(h, i, j, f, g, f0, 0x6ED9EBA1, 98);
		lineRight(g, h, i, j, f, f0, 0x6ED9EBA1, 99);




		m_h[0] += f;
		m_h[1] += g;
		m_h[2] += h;
		m_h[3] += i;
		m_h[4] += j;
		m_h[5] += a;
		m_h[6] += b;
		m_h[7] += c;
		m_h[8] += d;
		m_h[9] += e;

}
#else

{
		extendTable(xTable, 0);
		lineLeft(a, b, c, d, e, f0, 0x00000000, 0);
		lineLeft(e, a, b, c, d, f0, 0x00000000, 1);
		lineLeft(d, e, a, b, c, f0, 0x00000000, 2);
		lineLeft(c, d, e, a, b, f0, 0x00000000, 3);
		lineLeft(b, c, d, e, a, f0, 0x00000000, 4);
		lineLeft(a, b, c, d, e, f0, 0x00000000, 5);
		lineLeft(e, a, b, c, d, f0, 0x00000000, 6);
		lineLeft(d, e, a, b, c, f0, 0x00000000, 7);
		lineLeft(c, d, e, a, b, f0, 0x00000000, 8);
		lineLeft(b, c, d, e, a, f0, 0x00000000, 9);
		lineLeft(a, b, c, d, e, f0, 0x00000000, 10);
		lineLeft(e, a, b, c, d, f0, 0x00000000, 11);
		lineLeft(d, e, a, b, c, f0, 0x00000000, 12);
		lineLeft(c, d, e, a, b, f0, 0x00000000, 13);
		lineLeft(b, c, d, e, a, f0, 0x00000000, 14);
		lineLeft(a, b, c, d, e, f0, 0x00000000, 15);
		lineLeft(e, a, b, c, d, f0, 0x00000000, 16);
		lineLeft(d, e, a, b, c, f0, 0x00000000, 17);
		lineLeft(c, d, e, a, b, f0, 0x00000000, 18);
		lineLeft(b, c, d, e, a, f0, 0x00000000, 19);

		extendTable(yTable, 0);
		lineRight(f, g, h, i, j, f4, 0xA953FD4E, 0);
		lineRight(j, f, g, h, i, f4, 0xA953FD4E, 1);
		lineRight(i, j, f, g, h, f4, 0xA953FD4E, 2);
		lineRight(h, i, j, f, g, f4, 0xA953FD4E, 3);
		lineRight(g, h, i, j, f, f4, 0xA953FD4E, 4);
		lineRight(f, g, h, i, j, f4, 0xA953FD4E, 5);
		lineRight(j, f, g, h, i, f4, 0xA953FD4E, 6);
		lineRight(i, j, f, g, h, f4, 0xA953FD4E, 7);
		lineRight(h, i, j, f, g, f4, 0xA953FD4E, 8);
		lineRight(g, h, i, j, f, f4, 0xA953FD4E, 9);
		lineRight(f, g, h, i, j, f4, 0xA953FD4E, 10);
		lineRight(j, f, g, h, i, f4, 0xA953FD4E, 11);
		lineRight(i, j, f, g, h, f4, 0xA953FD4E, 12);
		lineRight(h, i, j, f, g, f4, 0xA953FD4E, 13);
		lineRight(g, h, i, j, f, f4, 0xA953FD4E, 14);
		lineRight(f, g, h, i, j, f4, 0xA953FD4E, 15);
		lineRight(j, f, g, h, i, f4, 0xA953FD4E, 16);
		lineRight(i, j, f, g, h, f4, 0xA953FD4E, 17);
		lineRight(h, i, j, f, g, f4, 0xA953FD4E, 18);
		lineRight(g, h, i, j, f, f4, 0xA953FD4E, 19);

		swapChainVars();


		extendTable(xTable, 1);
		lineLeft(a, b, c, d, e, f1, 0x5A827999, 20);
		lineLeft(e, a, b, c, d, f1, 0x5A827999, 21);
		lineLeft(d, e, a, b, c, f1, 0x5A827999, 22);
		lineLeft(c, d, e, a, b, f1, 0x5A827999, 23);
		lineLeft(b, c, d, e, a, f1, 0x5A827999, 24);
		lineLeft(a, b, c, d, e, f1, 0x5A827999, 25);
		lineLeft(e, a, b, c, d, f1, 0x5A827999, 26);
		lineLeft(d, e, a, b, c, f1, 0x5A827999, 27);
		lineLeft(c, d, e, a, b, f1, 0x5A827999, 28);
		lineLeft(b, c, d, e, a, f1, 0x5A827999, 29);
		lineLeft(a, b, c, d, e, f1, 0x5A827999, 30);
		lineLeft(e, a, b, c, d, f1, 0x5A827999, 31);
		lineLeft(d, e, a, b, c, f1, 0x5A827999, 32);
		lineLeft(c, d, e, a, b, f1, 0x5A827999, 33);
		lineLeft(b, c, d, e, a, f1, 0x5A827999, 34);
		lineLeft(a, b, c, d, e, f1, 0x5A827999, 35);
		lineLeft(e, a, b, c, d, f1, 0x5A827999, 36);
		lineLeft(d, e, a, b, c, f1, 0x5A827999, 37);
		lineLeft(c, d, e, a, b, f1, 0x5A827999, 38);
		lineLeft(b, c, d, e, a, f1, 0x5A827999, 39);


		extendTable(yTable, 1);
		lineRight(f, g, h, i, j, f3, 0x8F1BBCDC, 20);
		lineRight(j, f, g, h, i, f3, 0x8F1BBCDC, 21);
		lineRight(i, j, f, g, h, f3, 0x8F1BBCDC, 22);
		lineRight(h, i, j, f, g, f3, 0x8F1BBCDC, 23);
		lineRight(g, h, i, j, f, f3, 0x8F1BBCDC, 24);
		lineRight(f, g, h, i, j, f3, 0x8F1BBCDC, 25);
		lineRight(j, f, g, h, i, f3, 0x8F1BBCDC, 26);
		lineRight(i, j, f, g, h, f3, 0x8F1BBCDC, 27);
		lineRight(h, i, j, f, g, f3, 0x8F1BBCDC, 28);
		lineRight(g, h, i, j, f, f3, 0x8F1BBCDC, 29);
		lineRight(f, g, h, i, j, f3, 0x8F1BBCDC, 30);
		lineRight(j, f, g, h, i, f3, 0x8F1BBCDC, 31);
		lineRight(i, j, f, g, h, f3, 0x8F1BBCDC, 32);
		lineRight(h, i, j, f, g, f3, 0x8F1BBCDC, 33);
		lineRight(g, h, i, j, f, f3, 0x8F1BBCDC, 34);
		lineRight(f, g, h, i, j, f3, 0x8F1BBCDC, 35);
		lineRight(j, f, g, h, i, f3, 0x8F1BBCDC, 36);
		lineRight(i, j, f, g, h, f3, 0x8F1BBCDC, 37);
		lineRight(h, i, j, f, g, f3, 0x8F1BBCDC, 38);
		lineRight(g, h, i, j, f, f3, 0x8F1BBCDC, 39);

		swapChainVars();




		extendTable(xTable, 2);
		lineLeft(a, b, c, d, e, f2, 0x6ED9EBA1, 40);
		lineLeft(e, a, b, c, d, f2, 0x6ED9EBA1, 41);
		lineLeft(d, e, a, b, c, f2, 0x6ED9EBA1, 42);
		lineLeft(c, d, e, a, b, f2, 0x6ED9EBA1, 43);
		lineLeft(b, c, d, e, a, f2, 0x6ED9EBA1, 44);
		lineLeft(a, b, c, d, e, f2, 0x6ED9EBA1, 45);
		lineLeft(e, a, b, c, d, f2, 0x6ED9EBA1, 46);
		lineLeft(d, e, a, b, c, f2, 0x6ED9EBA1, 47);
		lineLeft(c, d, e, a, b, f2, 0x6ED9EBA1, 48);
		lineLeft(b, c, d, e, a, f2, 0x6ED9EBA1, 49);
		lineLeft(a, b, c, d, e, f2, 0x6ED9EBA1, 50);
		lineLeft(e, a, b, c, d, f2, 0x6ED9EBA1, 51);
		lineLeft(d, e, a, b, c, f2, 0x6ED9EBA1, 52);
		lineLeft(c, d, e, a, b, f2, 0x6ED9EBA1, 53);
		lineLeft(b, c, d, e, a, f2, 0x6ED9EBA1, 54);
		lineLeft(a, b, c, d, e, f2, 0x6ED9EBA1, 55);
		lineLeft(e, a, b, c, d, f2, 0x6ED9EBA1, 56);
		lineLeft(d, e, a, b, c, f2, 0x6ED9EBA1, 57);
		lineLeft(c, d, e, a, b, f2, 0x6ED9EBA1, 58);
		lineLeft(b, c, d, e, a, f2, 0x6ED9EBA1, 59);


		extendTable(yTable, 2);
		lineRight(f, g, h, i, j, f2, 0x00000000, 40);
		lineRight(j, f, g, h, i, f2, 0x00000000, 41);
		lineRight(i, j, f, g, h, f2, 0x00000000, 42);
		lineRight(h, i, j, f, g, f2, 0x00000000, 43);
		lineRight(g, h, i, j, f, f2, 0x00000000, 44);
		lineRight(f, g, h, i, j, f2, 0x00000000, 45);
		lineRight(j, f, g, h, i, f2, 0x00000000, 46);
		lineRight(i, j, f, g, h, f2, 0x00000000, 47);
		lineRight(h, i, j, f, g, f2, 0x00000000, 48);
		lineRight(g, h, i, j, f, f2, 0x00000000, 49);
		lineRight(f, g, h, i, j, f2, 0x00000000, 50);
		lineRight(j, f, g, h, i, f2, 0x00000000, 51);
		lineRight(i, j, f, g, h, f2, 0x00000000, 52);
		lineRight(h, i, j, f, g, f2, 0x00000000, 53);
		lineRight(g, h, i, j, f, f2, 0x00000000, 54);
		lineRight(f, g, h, i, j, f2, 0x00000000, 55);
		lineRight(j, f, g, h, i, f2, 0x00000000, 56);
		lineRight(i, j, f, g, h, f2, 0x00000000, 57);
		lineRight(h, i, j, f, g, f2, 0x00000000, 58);
		lineRight(g, h, i, j, f, f2, 0x00000000, 59);

		swapChainVars();


		extendTable(xTable, 3);
		lineLeft(a, b, c, d, e, f3, 0x8F1BBCDC, 60);
		lineLeft(e, a, b, c, d, f3, 0x8F1BBCDC, 61);
		lineLeft(d, e, a, b, c, f3, 0x8F1BBCDC, 62);
		lineLeft(c, d, e, a, b, f3, 0x8F1BBCDC, 63);
		lineLeft(b, c, d, e, a, f3, 0x8F1BBCDC, 64);
		lineLeft(a, b, c, d, e, f3, 0x8F1BBCDC, 65);
		lineLeft(e, a, b, c, d, f3, 0x8F1BBCDC, 66);
		lineLeft(d, e, a, b, c, f3, 0x8F1BBCDC, 67);
		lineLeft(c, d, e, a, b, f3, 0x8F1BBCDC, 68);
		lineLeft(b, c, d, e, a, f3, 0x8F1BBCDC, 69);
		lineLeft(a, b, c, d, e, f3, 0x8F1BBCDC, 70);
		lineLeft(e, a, b, c, d, f3, 0x8F1BBCDC, 71);
		lineLeft(d, e, a, b, c, f3, 0x8F1BBCDC, 72);
		lineLeft(c, d, e, a, b, f3, 0x8F1BBCDC, 73);
		lineLeft(b, c, d, e, a, f3, 0x8F1BBCDC, 74);
		lineLeft(a, b, c, d, e, f3, 0x8F1BBCDC, 75);
		lineLeft(e, a, b, c, d, f3, 0x8F1BBCDC, 76);
		lineLeft(d, e, a, b, c, f3, 0x8F1BBCDC, 77);
		lineLeft(c, d, e, a, b, f3, 0x8F1BBCDC, 78);
		lineLeft(b, c, d, e, a, f3, 0x8F1BBCDC, 79);



		extendTable(yTable, 3);
		lineRight(f, g, h, i, j, f1, 0x5A827999, 60);
		lineRight(j, f, g, h, i, f1, 0x5A827999, 61);
		lineRight(i, j, f, g, h, f1, 0x5A827999, 62);
		lineRight(h, i, j, f, g, f1, 0x5A827999, 63);
		lineRight(g, h, i, j, f, f1, 0x5A827999, 64);
		lineRight(f, g, h, i, j, f1, 0x5A827999, 65);
		lineRight(j, f, g, h, i, f1, 0x5A827999, 66);
		lineRight(i, j, f, g, h, f1, 0x5A827999, 67);
		lineRight(h, i, j, f, g, f1, 0x5A827999, 68);
		lineRight(g, h, i, j, f, f1, 0x5A827999, 69);
		lineRight(f, g, h, i, j, f1, 0x5A827999, 70);
		lineRight(j, f, g, h, i, f1, 0x5A827999, 71);
		lineRight(i, j, f, g, h, f1, 0x5A827999, 72);
		lineRight(h, i, j, f, g, f1, 0x5A827999, 73);
		lineRight(g, h, i, j, f, f1, 0x5A827999, 74);
		lineRight(f, g, h, i, j, f1, 0x5A827999, 75);
		lineRight(j, f, g, h, i, f1, 0x5A827999, 76);
		lineRight(i, j, f, g, h, f1, 0x5A827999, 77);
		lineRight(h, i, j, f, g, f1, 0x5A827999, 78);
		lineRight(g, h, i, j, f, f1, 0x5A827999, 79);

		swapChainVars();


		extendTable(xTable, 4);
		lineLeft(a, b, c, d, e, f4, 0xA953FD4E, 80);
		lineLeft(e, a, b, c, d, f4, 0xA953FD4E, 81);
		lineLeft(d, e, a, b, c, f4, 0xA953FD4E, 82);
		lineLeft(c, d, e, a, b, f4, 0xA953FD4E, 83);
		lineLeft(b, c, d, e, a, f4, 0xA953FD4E, 84);
		lineLeft(a, b, c, d, e, f4, 0xA953FD4E, 85);
		lineLeft(e, a, b, c, d, f4, 0xA953FD4E, 86);
		lineLeft(d, e, a, b, c, f4, 0xA953FD4E, 87);
		lineLeft(c, d, e, a, b, f4, 0xA953FD4E, 88);
		lineLeft(b, c, d, e, a, f4, 0xA953FD4E, 89);
		lineLeft(a, b, c, d, e, f4, 0xA953FD4E, 90);
		lineLeft(e, a, b, c, d, f4, 0xA953FD4E, 91);
		lineLeft(d, e, a, b, c, f4, 0xA953FD4E, 92);
		lineLeft(c, d, e, a, b, f4, 0xA953FD4E, 93);
		lineLeft(b, c, d, e, a, f4, 0xA953FD4E, 94);
		lineLeft(a, b, c, d, e, f4, 0xA953FD4E, 95);
		lineLeft(e, a, b, c, d, f4, 0xA953FD4E, 96);
		lineLeft(d, e, a, b, c, f4, 0xA953FD4E, 97);
		lineLeft(c, d, e, a, b, f4, 0xA953FD4E, 98);
		lineLeft(b, c, d, e, a, f4, 0xA953FD4E, 99);


		extendTable(yTable, 4);
		lineRight(f, g, h, i, j, f0, 0x6ED9EBA1, 80);
		lineRight(j, f, g, h, i, f0, 0x6ED9EBA1, 81);
		lineRight(i, j, f, g, h, f0, 0x6ED9EBA1, 82);
		lineRight(h, i, j, f, g, f0, 0x6ED9EBA1, 83);
		lineRight(g, h, i, j, f, f0, 0x6ED9EBA1, 84);
		lineRight(f, g, h, i, j, f0, 0x6ED9EBA1, 85);
		lineRight(j, f, g, h, i, f0, 0x6ED9EBA1, 86);
		lineRight(i, j, f, g, h, f0, 0x6ED9EBA1, 87);
		lineRight(h, i, j, f, g, f0, 0x6ED9EBA1, 88);
		lineRight(g, h, i, j, f, f0, 0x6ED9EBA1, 89);
		lineRight(f, g, h, i, j, f0, 0x6ED9EBA1, 90);
		lineRight(j, f, g, h, i, f0, 0x6ED9EBA1, 91);
		lineRight(i, j, f, g, h, f0, 0x6ED9EBA1, 92);
		lineRight(h, i, j, f, g, f0, 0x6ED9EBA1, 93);
		lineRight(g, h, i, j, f, f0, 0x6ED9EBA1, 94);
		lineRight(f, g, h, i, j, f0, 0x6ED9EBA1, 95);
		lineRight(j, f, g, h, i, f0, 0x6ED9EBA1, 96);
		lineRight(i, j, f, g, h, f0, 0x6ED9EBA1, 97);
		lineRight(h, i, j, f, g, f0, 0x6ED9EBA1, 98);
		lineRight(g, h, i, j, f, f0, 0x6ED9EBA1, 99);

		swapChainVars();

		m_h[0] += a;
		m_h[1] += b;
		m_h[2] += c;
		m_h[3] += d;
		m_h[4] += e;
		m_h[5] += f;
		m_h[6] += g;
		m_h[7] += h;
		m_h[8] += i;
		m_h[9] += j;

}
#endif
	}
}


#ifndef RUN_TEST
#include <cstdio>
#include <fstream>
int main()
{
	std::vector<char> buf(1024*1024*510, '\0');

	// 500 MB
	// dd if=/dev/urandom of=/tmp/test count=1024000
	std::ifstream ifs ("/tmp/test");
	ifs.read(buf.data(), buf.size());

	printf("result: %s\n", HAS_V_320().addData(buf.data(), ifs.gcount()).finalize().toString().c_str());

	return 0;
}
#endif
