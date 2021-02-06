/*
** JPAT C
*/

#ifndef _tables_h
#define _tables_h 1

#include <wchar.h>
#include <inttypes.h>

enum {
	kAlphabet_Hiragana = (1 << 0),
	kAlphabet_Katakana = (1 << 1)
};

const wchar_t hiragana[] = {
  L'あ',  L'い',  L'う',  L'え',  L'お',
  L'か',  L'き',  L'く',  L'け',  L'こ',
  L'が',  L'ぎ',  L'ぐ',  L'げ',  L'ご',
  L'さ',  L'し',  L'す',  L'せ',  L'そ',
  L'ざ',  L'じ',  L'ず',  L'ぜ',  L'ぞ', 
  L'た',  L'ち',  L'つ',  L'て',  L'と', 
  L'だ',  L'ぢ',  L'づ',  L'で',  L'ど', 
  L'な',  L'に',  L'ぬ',  L'ね',  L'の', 
  L'は',  L'ひ',  L'ふ',  L'へ',  L'ほ', 
  L'ば',  L'び',  L'ぶ',  L'べ',  L'ぼ', 
  L'ぱ',  L'ぴ',  L'ぷ',  L'ぺ',  L'ぽ', 
  L'ま',  L'み',  L'む',  L'め',  L'も', 
  L'や',  L'ゆ',  L'よ',  L'ら',  L'り',
  L'る',  L'れ',  L'ろ',  L'わ',  L'を',
  L'ん'
};

const wchar_t katakana[] = {
  L'ア',  L'イ',  L'ウ',  L'エ',  L'オ',
  L'カ',  L'キ',  L'ク',  L'ケ',  L'コ',
  L'ガ',  L'ギ',  L'グ',  L'ゲ',  L'ゴ',
  L'サ',  L'シ',  L'ス',  L'セ',  L'ソ',
  L'ザ',  L'ジ',  L'ズ',  L'ゼ',  L'ゾ',
  L'タ',  L'チ',  L'ツ',  L'テ',  L'ト',
  L'ダ',  L'ヂ',  L'ヅ',  L'デ',  L'ド',
  L'ナ',  L'ニ',  L'ヌ',  L'ネ',  L'ノ',
  L'ハ',  L'ヒ',  L'フ',  L'ヘ',  L'ホ',
  L'バ',  L'ビ',  L'ブ',  L'ベ',  L'ボ',
  L'パ',  L'ピ',  L'プ',  L'ペ',  L'ポ',
  L'マ',  L'ミ',  L'ム',  L'メ',  L'モ',
  L'ヤ',  L'ユ',  L'ヨ',  L'ラ',  L'リ',
  L'ル',  L'レ',  L'ロ',  L'ワ',  L'ヲ',
  L'ン'
};

const wchar_t *translations[] = {
  L"a",   L"i",   L"u",   L"e",   L"o",
	L"ka",  L"ki",  L"ku",  L"ke",  L"ko",
	L"ga",  L"gi",  L"gu",  L"ge",  L"go",
	L"sa",  L"si",  L"su",  L"se",  L"so",
	L"za",  L"zi",  L"zu",  L"ze",  L"zo",
	L"ta",  L"chi", L"tsu", L"te",  L"to",
	L"da",  L"di",  L"du",  L"de",  L"do",
	L"na",  L"ni",  L"nu",  L"ne",  L"no",
	L"ha",  L"hi",  L"hu",  L"he",  L"ho",
	L"ba",  L"bi",  L"bu",  L"be",  L"bo",
	L"pa",  L"pi",  L"pu",  L"pe",  L"po",
	L"ma",  L"mi",  L"mu",  L"me",  L"mo",
	L"ya",  L"yu",  L"yo",  L"ra",  L"ri",
  L"ru",  L"re",  L"ro",  L"wa",  L"wo",
  L"n", 
};

uint32_t mistakes[71][2];

#endif