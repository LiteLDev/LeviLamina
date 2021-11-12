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

#ifndef CHOCOBO1_CSHAKE_H
#define CHOCOBO1_CSHAKE_H

#include "sha3.h"

#include <climits>
#include <cmath>
#include <cstdint>
#include <memory>
#include <string>
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
	// CSHAKE_128(const int digestLengthInBytes, const std::string &name = {}, const std::string &customize = {});
	// CSHAKE_256(const int digestLengthInBytes, const std::string &name = {}, const std::string &customize = {});
}


namespace Chocobo1
{
// users should ignore things in this namespace
namespace Hash
{
namespace CShake_NS
{
	template <typename S, typename K, int P>
	class CShake
	{
		// https://doi.org/10.6028/NIST.SP.800-185

		public:
			using Byte = uint8_t;

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
			template <typename T, std::size_t Extent = std::dynamic_extent>
			using Span = std::span<T, Extent>;
#else
			template <typename T, std::size_t Extent = gsl::dynamic_extent>
			using Span = gsl::span<T, Extent>;
#endif


			explicit constexpr CShake(const int digestLength, const std::string &name = {}, const std::string &customize = {});

			constexpr void reset();
			constexpr CShake& finalize();  // after this, only `toString()`, `toVector()`, `reset()` are available

			std::string toString() const;
			std::vector<Byte> toVector() const;

			constexpr CShake& addData(const Span<const Byte> inData);
			constexpr CShake& addData(const void *ptr, const std::size_t length);
			template <std::size_t N>
			constexpr CShake& addData(const Byte (&array)[N]);
			template <typename T, std::size_t N>
			CShake& addData(const T (&array)[N]);
			template <typename T>
			CShake& addData(const Span<T> inSpan);

		private:
			constexpr void addDataImpl(const Span<const Byte> data);

			const bool m_customized = false;

			std::unique_ptr<S> m_shake;
			std::unique_ptr<K> m_keccak;
	};


	// helpers
	template <typename R, typename T>
	constexpr R ror(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<R>::value, "");
		static_assert(std::is_unsigned<T>::value, "");
		return static_cast<R>(x >> s);
	}

	const auto leftEncode = [](const uint64_t value) -> Buffer<uint8_t, sizeof(value)>
	{
		const uint8_t n = (value == 0) ? 1 : static_cast<uint8_t>(std::lround((std::log2(value) / 8) + 0.5));

		Buffer<uint8_t, sizeof(value)> ret = {n};
		for (int i = (n - 1); i >= 0; --i)
			ret.fill(ror<uint8_t>(value, (8 * i)));

		return ret;
	};


	//
	template <typename S, typename K, int P>
	constexpr CShake<S, K, P>::CShake(const int digestLength, const std::string &name, const std::string &customize)
		: m_customized(!(name.empty() && customize.empty()))
	{
		static_assert((P >= 0), "Template parameter value invalid: P");
		static_assert((CHAR_BIT == 8), "Sorry, we don't support exotic CPUs");

		if (!m_customized)
		{
			m_shake = std::make_unique<S>(digestLength);
			return;
		}
		else
		{
			m_keccak = std::make_unique<K>(digestLength);
		}

		const auto processString = [this](const std::string &str, size_t &length) -> void
		{
			const auto encodedStr = leftEncode(str.size() * 8);
			addData({encodedStr.data(), encodedStr.size()});
			length += encodedStr.size();
			addData(str.data(), str.size());
			length += str.size();
		};
		const auto bytepadCount = [](const size_t length, const size_t target) -> size_t
		{
			return ((target - (length % target)) % target);
		};

		size_t length = 0;

		const auto encodedW = leftEncode(P);
		addData({encodedW.data(), encodedW.size()});
		length += encodedW.size();

		processString(name, length);
		processString(customize, length);

		const Buffer<Byte, 1> zero {0};
		for (int i = 0; i < static_cast<int>(bytepadCount(length, P)); ++i)
			addData({zero.data(), zero.size()});
	}

	template <typename S, typename K, int P>
	constexpr void CShake<S, K, P>::reset()
	{
		if (!m_customized)
			m_shake->reset();
		else
			m_keccak->reset();
	}

	template <typename S, typename K, int P>
	constexpr CShake<S, K, P>& CShake<S, K, P>::finalize()
	{
		if (!m_customized)
			m_shake->finalize();
		else
			m_keccak->finalize();
		return (*this);
	}

	template <typename S, typename K, int P>
	std::string CShake<S, K, P>::toString() const
	{
		if (!m_customized)
			return m_shake->toString();
		else
			return m_keccak->toString();
	}

	template <typename S, typename K, int P>
	std::vector<typename CShake<S, K, P>::Byte> CShake<S, K, P>::toVector() const
	{
		if (!m_customized)
			return m_shake->toVector();
		else
			return m_keccak->toVector();
	}

	template <typename S, typename K, int P>
	constexpr CShake<S, K, P>& CShake<S, K, P>::addData(const Span<const Byte> inData)
	{
		addDataImpl(inData);
		return (*this);
	}

	template <typename S, typename K, int P>
	constexpr CShake<S, K, P>& CShake<S, K, P>::addData(const void *ptr, const std::size_t length)
	{
		// Span::size_type = std::size_t
		return addData({static_cast<const Byte*>(ptr), length});
	}

	template <typename S, typename K, int P>
	template <std::size_t N>
	constexpr CShake<S, K, P>& CShake<S, K, P>::addData(const Byte (&array)[N])
	{
		return addData({array, N});
	}

	template <typename S, typename K, int P>
	template <typename T, std::size_t N>
	CShake<S, K, P>& CShake<S, K, P>::addData(const T (&array)[N])
	{
		return addData({reinterpret_cast<const Byte*>(array), (sizeof(T) * N)});
	}

	template <typename S, typename K, int P>
	template <typename T>
	CShake<S, K, P>& CShake<S, K, P>::addData(const Span<T> inSpan)
	{
		return addData({reinterpret_cast<const Byte*>(inSpan.data()), inSpan.size_bytes()});
	}

	template <typename S, typename K, int P>
	constexpr void CShake<S, K, P>::addDataImpl(const Span<const Byte> data)
	{
		if (!m_customized)
			m_shake->addData(data);
		else
			m_keccak->addData(data);
	}
}
}
	struct CSHAKE_128 : Hash::CShake_NS::CShake<SHAKE_128, Hash::SHA3_NS::Keccak<(1344 / 8), 0x04>, (1344 / 8)> { explicit CSHAKE_128(const int l, const std::string &n = {}, const std::string &c = {}) : Hash::CShake_NS::CShake<SHAKE_128, Hash::SHA3_NS::Keccak<(1344 / 8), 0x04>, (1344 / 8)>(l, n, c) {} };
	struct CSHAKE_256 : Hash::CShake_NS::CShake<SHAKE_256, Hash::SHA3_NS::Keccak<(1088 / 8), 0x04>, (1088 / 8)> { explicit CSHAKE_256(const int l, const std::string &n = {}, const std::string &c = {}) : Hash::CShake_NS::CShake<SHAKE_256, Hash::SHA3_NS::Keccak<(1088 / 8), 0x04>, (1088 / 8)>(l, n, c) {} };
}

#endif  // CHOCOBO1_CSHAKE_H
