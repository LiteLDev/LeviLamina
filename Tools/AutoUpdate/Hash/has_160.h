/*
 *  Chocobo1/Hash
 *
 *   Copyright 2017-2020 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#ifndef CHOCOBO1_HAS_160_H
#define CHOCOBO1_HAS_160_H

#include <array>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdint>
#include <initializer_list>
#include <string>
#include <type_traits>
#include <vector>

#if (__cplusplus > 201703L)
#include <version>
#endif

#ifndef USE_STD_SPAN_CHOCOBO1_HASH
#if (__cpp_lib_span >= 202002L)
#define USE_STD_SPAN_CHOCOBO1_HASH 1
#else
#define USE_STD_SPAN_CHOCOBO1_HASH 0
#endif
#endif

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
#include <span>
#else
#include "gsl/span"
#endif


namespace Chocobo1
{
	// Use these!!
	// HAS_160();
}


namespace Chocobo1
{
// users should ignore things in this namespace

namespace Hash
{
#ifndef CONSTEXPR_CPP17_CHOCOBO1_HASH
#if __cplusplus >= 201703L
#define CONSTEXPR_CPP17_CHOCOBO1_HASH constexpr
#else
#define CONSTEXPR_CPP17_CHOCOBO1_HASH
#endif
#endif

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
	using IndexType = std::size_t;
#else
	using IndexType = gsl::index;
#endif

#ifndef CHOCOBO1_HASH_BUFFER_IMPL
#define CHOCOBO1_HASH_BUFFER_IMPL
	template <typename T, IndexType N>
	class Buffer
	{
		public:
			using value_type = T;
			using index_type = IndexType;
			using size_type = std::size_t;

			constexpr Buffer() = default;
			constexpr Buffer(const Buffer &) = default;

			CONSTEXPR_CPP17_CHOCOBO1_HASH Buffer(const std::initializer_list<T> initList)
			{
#if !defined(NDEBUG)
				// check if out-of-bounds
				static_cast<void>(m_array.at(m_dataEndIdx + initList.size() - 1));
#endif

				for (const auto &i : initList)
				{
					m_array[m_dataEndIdx] = i;
					++m_dataEndIdx;
				}
			}

			template <typename InputIt>
			constexpr Buffer(const InputIt first, const InputIt last)
			{
				for (InputIt iter = first; iter != last; ++iter)
				{
					this->fill(*iter);
				}
			}

			constexpr T& operator[](const index_type pos)
			{
				return m_array[pos];
			}

			constexpr T operator[](const index_type pos) const
			{
				return m_array[pos];
			}

			CONSTEXPR_CPP17_CHOCOBO1_HASH void fill(const T &value, const index_type count = 1)
			{
#if !defined(NDEBUG)
				// check if out-of-bounds
				static_cast<void>(m_array.at(m_dataEndIdx + count - 1));
#endif

				for (index_type i = 0; i < count; ++i)
				{
					m_array[m_dataEndIdx] = value;
					++m_dataEndIdx;
				}
			}

			template <typename InputIt>
			constexpr void push_back(const InputIt first, const InputIt last)
			{
				for (InputIt iter = first; iter != last; ++iter)
				{
					this->fill(*iter);
				}
			}

			constexpr void clear()
			{
				m_array = {};
				m_dataEndIdx = 0;
			}

			constexpr bool empty() const
			{
				return (m_dataEndIdx == 0);
			}

			constexpr size_type size() const
			{
				return m_dataEndIdx;
			}

			constexpr const T* data() const
			{
				return m_array.data();
			}

		private:
			std::array<T, N> m_array {};
			index_type m_dataEndIdx = 0;
	};
#endif


namespace HAS160_NS
{
	class HAS_160
	{
		// https://www.tta.or.kr/eng/new/standardization/eng_ttastddesc.jsp?stdno=TTAS.KO-12.0011/R2

		public:
			using Byte = uint8_t;
			using ResultArrayType = std::array<Byte, 20>;

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
			template <typename T, std::size_t Extent = std::dynamic_extent>
			using Span = std::span<T, Extent>;
#else
			template <typename T, std::size_t Extent = gsl::dynamic_extent>
			using Span = gsl::span<T, Extent>;
#endif


			constexpr HAS_160();

			constexpr void reset();
			HAS_160& finalize();  // after this, only `toArray()`, `toString()`, `toVector()`, `reset()` are available

			std::string toString() const;
			std::vector<Byte> toVector() const;
			CONSTEXPR_CPP17_CHOCOBO1_HASH ResultArrayType toArray() const;

			HAS_160& addData(const Span<const Byte> inData);
			HAS_160& addData(const void *ptr, const std::size_t length);
			template <std::size_t N>
			HAS_160& addData(const Byte (&array)[N]);
			template <typename T, std::size_t N>
			HAS_160& addData(const T (&array)[N]);
			template <typename T>
			HAS_160& addData(const Span<T> inSpan);

		private:
			void addDataImpl(const Span<const Byte> data);

			static constexpr int BLOCK_SIZE = 64;

			Buffer<Byte, (BLOCK_SIZE * 2)> m_buffer;  // x2 for paddings
			uint64_t m_sizeCounter = 0;

			uint32_t m_h[5] = {};
	};


	// helpers
	template <typename T>
	class Loader
	{
		// this class workaround loading data from unaligned memory boundaries
		// also eliminate endianness issues
		public:
			explicit constexpr Loader(const uint8_t *ptr)
				: m_ptr(ptr)
			{
			}

			constexpr T operator[](const IndexType idx) const
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
		static_assert(std::is_unsigned<T>::value, "");
		return static_cast<R>(x >> s);
	}

	template <typename T>
	constexpr T rotl(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<T>::value, "");
		if (s == 0)
			return x;
		return ((x << s) | (x >> ((sizeof(T) * 8) - s)));
	}


	//
	constexpr HAS_160::HAS_160()
	{
		static_assert((CHAR_BIT == 8), "Sorry, we don't support exotic CPUs");
		reset();
	}

	constexpr void HAS_160::reset()
	{
		m_buffer.clear();
		m_sizeCounter = 0;

		m_h[0] = 0x67452301;
		m_h[1] = 0xEFCDAB89;
		m_h[2] = 0x98BADCFE;
		m_h[3] = 0x10325476;
		m_h[4] = 0xC3D2E1F0;
	}

	HAS_160& HAS_160::finalize()
	{
		m_sizeCounter += m_buffer.size();

		// append 1 bit
		m_buffer.fill(1 << 7);

		// append paddings
		const auto len = static_cast<int>(((2 * BLOCK_SIZE) - (m_buffer.size() + 8)) % BLOCK_SIZE);
		m_buffer.fill(0, (len + 8));

		// append size in bits
		const uint64_t sizeCounterBits = m_sizeCounter * 8;
		const uint32_t sizeCounterBitsL = ror<uint32_t>(sizeCounterBits, 0);
		const uint32_t sizeCounterBitsH = ror<uint32_t>(sizeCounterBits, 32);
		for (int i = 0; i < 4; ++i)
		{
			m_buffer[m_buffer.size() - 8 + i] = ror<Byte>(sizeCounterBitsL, (8 * i));
			m_buffer[m_buffer.size() - 4 + i] = ror<Byte>(sizeCounterBitsH, (8 * i));
		}

		addDataImpl({m_buffer.data(), m_buffer.size()});
		m_buffer.clear();

		return (*this);
	}

	std::string HAS_160::toString() const
	{
		const auto a = toArray();
		std::string ret;
		ret.resize(2 * a.size());

		auto retPtr = &ret.front();
		for (const auto c : a)
		{
			const Byte upper = ror<Byte>(c, 4);
			*(retPtr++) = static_cast<char>((upper < 10) ? (upper + '0') : (upper - 10 + 'a'));

			const Byte lower = c & 0xf;
			*(retPtr++) = static_cast<char>((lower < 10) ? (lower + '0') : (lower - 10 + 'a'));
		}

		return ret;
	}

	std::vector<HAS_160::Byte> HAS_160::toVector() const
	{
		const auto a = toArray();
		return {a.begin(), a.end()};
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH HAS_160::ResultArrayType HAS_160::toArray() const
	{
		const Span<const uint32_t> state(m_h);
		const int dataSize = sizeof(decltype(state)::value_type);

		ResultArrayType ret {};
		auto retPtr = ret.data();
		for (const auto i : state)
		{
			for (int j = 0; j < dataSize; ++j)
				*(retPtr++) = ror<Byte>(i, (j * 8));
		}

		return ret;
	}

	HAS_160& HAS_160::addData(const Span<const Byte> inData)
	{
		Span<const Byte> data = inData;

		if (!m_buffer.empty())
		{
			const size_t len = std::min<size_t>((BLOCK_SIZE - m_buffer.size()), data.size());  // try fill to BLOCK_SIZE bytes
			m_buffer.push_back(data.begin(), (data.begin() + len));

			if (m_buffer.size() < BLOCK_SIZE)  // still doesn't fill the buffer
				return (*this);

			addDataImpl({m_buffer.data(), m_buffer.size()});
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
			m_buffer = {(data.begin() + len), data.end()};

		return (*this);
	}

	HAS_160& HAS_160::addData(const void *ptr, const std::size_t length)
	{
		// Span::size_type = std::size_t
		return addData({static_cast<const Byte*>(ptr), length});
	}

	template <std::size_t N>
	HAS_160& HAS_160::addData(const Byte (&array)[N])
	{
		return addData({array, N});
	}

	template <typename T, std::size_t N>
	HAS_160& HAS_160::addData(const T (&array)[N])
	{
		return addData({reinterpret_cast<const Byte*>(array), (sizeof(T) * N)});
	}

	template <typename T>
	HAS_160& HAS_160::addData(const Span<T> inSpan)
	{
		return addData({reinterpret_cast<const Byte*>(inSpan.data()), inSpan.size_bytes()});
	}

	void HAS_160::addDataImpl(const Span<const Byte> data)
	{
		assert((data.size() % BLOCK_SIZE) == 0);

		m_sizeCounter += data.size();

		for (size_t i = 0, iend = static_cast<size_t>(data.size() / BLOCK_SIZE); i < iend; ++i)
		{
			const Loader<uint32_t> x(static_cast<const Byte *>(data.data() + (i * BLOCK_SIZE)));

			static const unsigned int lTable[80] =
			{
				18,  0, 1,  2,  3, 19,  4,  5, 6,  7, 16,  8,  9, 10, 11, 17, 12, 13, 14, 15,
				18,  3, 6,  9, 12, 19, 15,  2, 5,  8, 16, 11, 14,  1,  4, 17,  7, 10, 13,  0,
				18, 12, 5, 14,  7, 19,  0,  9, 2, 11, 16,  4, 13,  6, 15, 17,  8,  1, 10,  3,
				18,  7, 2, 13,  8, 19,  3, 14, 9,  4, 16, 15, 10,  5,  0, 17, 11,  6,  1, 12
			};

			uint32_t xTable[20];
			for (int j = 0; j < 16; ++j)
				xTable[j] = x[j];

			const auto extendXTable = [&xTable](const unsigned int round) -> void
			{
				xTable[16] = xTable[lTable[round +  1]] ^ xTable[lTable[round +  2]] ^ xTable[lTable[round +  3]] ^ xTable[lTable[round +  4]];
				xTable[17] = xTable[lTable[round +  6]] ^ xTable[lTable[round +  7]] ^ xTable[lTable[round +  8]] ^ xTable[lTable[round +  9]];
				xTable[18] = xTable[lTable[round + 11]] ^ xTable[lTable[round + 12]] ^ xTable[lTable[round + 13]] ^ xTable[lTable[round + 14]];
				xTable[19] = xTable[lTable[round + 16]] ^ xTable[lTable[round + 17]] ^ xTable[lTable[round + 18]] ^ xTable[lTable[round + 19]];
			};

			uint32_t a = m_h[0];
			uint32_t b = m_h[1];
			uint32_t c = m_h[2];
			uint32_t d = m_h[3];
			uint32_t e = m_h[4];

			const auto round1 = [&xTable](uint32_t &a, uint32_t &b, uint32_t &c, uint32_t &d, uint32_t &e, const unsigned int s1, const int t) -> void
			{
				const uint32_t f = ((b & (c ^ d)) ^ d);  // alternative
				e = rotl(a, s1) + f + e + xTable[lTable[t]] + 0x00000000;
				b = rotl(b, 10);
			};
			extendXTable(0);
			round1(a, b, c, d, e,  5, 0);
			round1(e, a, b, c, d, 11, 1);
			round1(d, e, a, b, c,  7, 2);
			round1(c, d, e, a, b, 15, 3);
			round1(b, c, d, e, a,  6, 4);
			round1(a, b, c, d, e, 13, 5);
			round1(e, a, b, c, d,  8, 6);
			round1(d, e, a, b, c, 14, 7);
			round1(c, d, e, a, b,  7, 8);
			round1(b, c, d, e, a, 12, 9);
			round1(a, b, c, d, e,  9, 10);
			round1(e, a, b, c, d, 11, 11);
			round1(d, e, a, b, c,  8, 12);
			round1(c, d, e, a, b, 15, 13);
			round1(b, c, d, e, a,  6, 14);
			round1(a, b, c, d, e, 12, 15);
			round1(e, a, b, c, d,  9, 16);
			round1(d, e, a, b, c, 14, 17);
			round1(c, d, e, a, b,  5, 18);
			round1(b, c, d, e, a, 13, 19);

			const auto round2 = [&xTable](uint32_t &a, uint32_t &b, uint32_t &c, uint32_t &d, uint32_t &e, const unsigned int s1, const int t) -> void
			{
				const uint32_t f = (b ^ c ^ d);
				e = rotl(a, s1) + f + e + xTable[lTable[t]] + 0x5A827999;
				b = rotl(b, 17);
			};
			extendXTable(20);
			round2(a, b, c, d, e,  5, 20);
			round2(e, a, b, c, d, 11, 21);
			round2(d, e, a, b, c,  7, 22);
			round2(c, d, e, a, b, 15, 23);
			round2(b, c, d, e, a,  6, 24);
			round2(a, b, c, d, e, 13, 25);
			round2(e, a, b, c, d,  8, 26);
			round2(d, e, a, b, c, 14, 27);
			round2(c, d, e, a, b,  7, 28);
			round2(b, c, d, e, a, 12, 29);
			round2(a, b, c, d, e,  9, 30);
			round2(e, a, b, c, d, 11, 31);
			round2(d, e, a, b, c,  8, 32);
			round2(c, d, e, a, b, 15, 33);
			round2(b, c, d, e, a,  6, 34);
			round2(a, b, c, d, e, 12, 35);
			round2(e, a, b, c, d,  9, 36);
			round2(d, e, a, b, c, 14, 37);
			round2(c, d, e, a, b,  5, 38);
			round2(b, c, d, e, a, 13, 39);

			const auto round3 = [&xTable](uint32_t &a, uint32_t &b, uint32_t &c, uint32_t &d, uint32_t &e, const unsigned int s1, const int t) -> void
			{
				const uint32_t f = (c ^ (b | (~d)));
				e = rotl(a, s1) + f + e + xTable[lTable[t]] + 0x6ED9EBA1;
				b = rotl(b, 25);
			};
			extendXTable(40);
			round3(a, b, c, d, e,  5, 40);
			round3(e, a, b, c, d, 11, 41);
			round3(d, e, a, b, c,  7, 42);
			round3(c, d, e, a, b, 15, 43);
			round3(b, c, d, e, a,  6, 44);
			round3(a, b, c, d, e, 13, 45);
			round3(e, a, b, c, d,  8, 46);
			round3(d, e, a, b, c, 14, 47);
			round3(c, d, e, a, b,  7, 48);
			round3(b, c, d, e, a, 12, 49);
			round3(a, b, c, d, e,  9, 50);
			round3(e, a, b, c, d, 11, 51);
			round3(d, e, a, b, c,  8, 52);
			round3(c, d, e, a, b, 15, 53);
			round3(b, c, d, e, a,  6, 54);
			round3(a, b, c, d, e, 12, 55);
			round3(e, a, b, c, d,  9, 56);
			round3(d, e, a, b, c, 14, 57);
			round3(c, d, e, a, b,  5, 58);
			round3(b, c, d, e, a, 13, 59);

			const auto round4 = [&xTable](uint32_t &a, uint32_t &b, uint32_t &c, uint32_t &d, uint32_t &e, const unsigned int s1, const int t) -> void
			{
				const uint32_t f = (b ^ c ^ d);
				e = rotl(a, s1) + f + e + xTable[lTable[t]] + 0x8F1BBCDC;
				b = rotl(b, 30);
			};
			extendXTable(60);
			round4(a, b, c, d, e,  5, 60);
			round4(e, a, b, c, d, 11, 61);
			round4(d, e, a, b, c,  7, 62);
			round4(c, d, e, a, b, 15, 63);
			round4(b, c, d, e, a,  6, 64);
			round4(a, b, c, d, e, 13, 65);
			round4(e, a, b, c, d,  8, 66);
			round4(d, e, a, b, c, 14, 67);
			round4(c, d, e, a, b,  7, 68);
			round4(b, c, d, e, a, 12, 69);
			round4(a, b, c, d, e,  9, 70);
			round4(e, a, b, c, d, 11, 71);
			round4(d, e, a, b, c,  8, 72);
			round4(c, d, e, a, b, 15, 73);
			round4(b, c, d, e, a,  6, 74);
			round4(a, b, c, d, e, 12, 75);
			round4(e, a, b, c, d,  9, 76);
			round4(d, e, a, b, c, 14, 77);
			round4(c, d, e, a, b,  5, 78);
			round4(b, c, d, e, a, 13, 79);

			m_h[0] += a;
			m_h[1] += b;
			m_h[2] += c;
			m_h[3] += d;
			m_h[4] += e;
		}
	}
}
}
	using HAS_160 = Hash::HAS160_NS::HAS_160;
}
#endif  // CHOCOBO1_HAS_160_H
