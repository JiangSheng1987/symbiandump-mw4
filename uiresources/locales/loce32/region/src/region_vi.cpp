/*
* Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:   elocl_reg.704 for Vietnam region
*
*/

//  Include Files  

#include <kernel/ls_std.h>
#include "locl_region.h"

//  REGION CONSTANTS AND MACROS  

// The configuration data
const TInt RegionAspect::CountryCode = 84;
const TInt RegionAspect::UniversalTimeOffset = 25200;
const TDateFormat RegionAspect::DateFormat = EDateEuropean;
const TTimeFormat RegionAspect::TimeFormat = ETime24;
const TLocalePos RegionAspect::CurrencySymbolPosition = ELocaleAfter;
const TBool RegionAspect::CurrencySpaceBetween = ETrue;
const TInt RegionAspect::CurrencyDecimalPlaces = 0;
const TLocale::TNegativeCurrencyFormat RegionAspect::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(TLocale::ELeadingMinusSign);
const TBool RegionAspect::CurrencyTriadsAllowed = ETrue;
const TText * const RegionAspect::ThousandsSeparator = _S(".");
const TText * const RegionAspect::DecimalSeparator = _S(",");
const TText * const RegionAspect::DateSeparator[KMaxDateSeparators] = {_S(""),_S("/"),_S("/"),_S("")};
const TText * const RegionAspect::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S(":"),_S(":"),_S("")};
const TLocalePos RegionAspect::AmPmSymbolPosition = ELocaleAfter;
const TBool RegionAspect::AmPmSpaceBetween = ETrue;
const TDaylightSavingZone RegionAspect::HomeDaylightSavingZone = EDstNone;
const TUint RegionAspect::WorkDays = 0x1f;
const TText * const RegionAspect::CurrencySymbol = _S("\x0111");
const TText* const RegionAspect::ShortDateFormatSpec = _S("%F%/0%D%/1%M%/2%Y%/3");
const TText* const RegionAspect::LongDateFormatSpec = _S("%F%N g00e0" L"y %D th00e1" L"ng %M n0103" L"m %Y");
const TText* const RegionAspect::TimeFormatSpec = _S("%F%:0%H%:1%T%:2%S%:3");
const TDay RegionAspect::StartOfWeek = EMonday;
const TClockFormat RegionAspect::ClockFormat = EClockDigital;
const TUnitsFormat RegionAspect::UnitsGeneral = EUnitsMetric;
const TUnitsFormat RegionAspect::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat RegionAspect::UnitsDistanceLong = EUnitsMetric;
const TUint16 RegionAspect::RegionCode = 704;
const TUint RegionAspect::ExtraNegativeCurrencyFormatFlags = 0;

//  End of File