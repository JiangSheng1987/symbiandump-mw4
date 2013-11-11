/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:
*
*/

// It contains the customisation API.
// It should not be modified manually.

#ifndef AKNAPACLAYOUT_CDL_CUSTOM_H
#define AKNAPACLAYOUT_CDL_CUSTOM_H

#include <CdlEngDef.h>
#include "aknapaclayout.cdl.common.h"

namespace AknApacLayout
{

// This structure defines the interface to a customisation instance.
// A customisation instance must supply an instance of this structure, with the pointer
// members either being NULL, or pointing at functions or data of the correct type.

#ifdef __WINS__
struct SCdlImpl0
#else
struct SCdlImpl
#endif
	{
	TFind_pane_elements_Line_6_sig* Find_pane_elements_Line_6;
	Tpopup_fep_china_window_sig* popup_fep_china_window;
	Tpopup_fep_china_pinyin_window_sig* popup_fep_china_pinyin_window;
	TCursor_graphics__16__Line_1_sig* Cursor_graphics__16__Line_1;
	TCut_copy_and_paste_highlight_graphics__16__Line_1_sig* Cut_copy_and_paste_highlight_graphics__16__Line_1;
	TTime_and_date_entry_graphics__16__Line_1_sig* Time_and_date_entry_graphics__16__Line_1;
	Tcell_apac_character_popup_pane_sig* cell_apac_character_popup_pane;
	TCell_pane_texts__pop_up_APAC_character__Line_1_sig* Cell_pane_texts__pop_up_APAC_character__Line_1;
	TAPAC_character_selection_pop_up_window_descendants_Line_1_sig* APAC_character_selection_pop_up_window_descendants_Line_1;
	Tgrid_apac_character_popup_pane_sig* grid_apac_character_popup_pane;
	TAPAC_character_selection_pop_up_window_elements_Line_1_sig* APAC_character_selection_pop_up_window_elements_Line_1;
	TAPAC_character_selection_pop_up_window_elements_Line_2_sig* APAC_character_selection_pop_up_window_elements_Line_2;
	TAPAC_character_selection_pop_up_window_graphics_Line_1_sig* APAC_character_selection_pop_up_window_graphics_Line_1;
	TAPAC_character_selection_pop_up_window_graphics_Line_2_sig* APAC_character_selection_pop_up_window_graphics_Line_2;
	TAPAC_character_selection_pop_up_window_graphics_Line_3_sig* APAC_character_selection_pop_up_window_graphics_Line_3;
	TAPAC_character_selection_pop_up_window_graphics_Line_4_sig* APAC_character_selection_pop_up_window_graphics_Line_4;
	TAPAC_character_selection_pop_up_window_graphics_Line_5_sig* APAC_character_selection_pop_up_window_graphics_Line_5;
	TAPAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_Limits_sig* APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_Limits;
	TAPAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_sig* APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0;
	TChinese_FEP_pop_up_window_elements_and_descendants_panes_Line_1_sig* Chinese_FEP_pop_up_window_elements_and_descendants_panes_Line_1;
	Tfep_china_entry_pane_sig* fep_china_entry_pane;
	Tfep_china_candidate_pane_sig* fep_china_candidate_pane;
	TChinese_FEP_entry_pane_texts_Line_1_sig* Chinese_FEP_entry_pane_texts_Line_1;
	TChinese_FEP_candidate_pane_elements_Line_1_sig* Chinese_FEP_candidate_pane_elements_Line_1;
	TChinese_FEP_candidate_pane_elements_Line_2_sig* Chinese_FEP_candidate_pane_elements_Line_2;
	TChinese_FEP_candidate_pane_elements_Line_3_sig* Chinese_FEP_candidate_pane_elements_Line_3;
	Tfep_china_highlight_pane_sig* fep_china_highlight_pane;
	TChinese_FEP_candidate_pane_elements_SUB_TABLE_0_Limits_sig* Chinese_FEP_candidate_pane_elements_SUB_TABLE_0_Limits;
	TChinese_FEP_candidate_pane_elements_SUB_TABLE_0_sig* Chinese_FEP_candidate_pane_elements_SUB_TABLE_0;
	TChinese_FEP_candidate_pane_texts_Line_1_sig* Chinese_FEP_candidate_pane_texts_Line_1;
	TChinese_FEP_candidate_pane_texts_Line_2_sig* Chinese_FEP_candidate_pane_texts_Line_2;
	TChinese_FEP_pop_up_window_graphics_Line_1_sig* Chinese_FEP_pop_up_window_graphics_Line_1;
	TChinese_FEP_pop_up_window_graphics_Line_2_sig* Chinese_FEP_pop_up_window_graphics_Line_2;
	TChinese_FEP_pop_up_window_graphics_Line_3_sig* Chinese_FEP_pop_up_window_graphics_Line_3;
	TChinese_FEP_pop_up_window_graphics_Line_4_sig* Chinese_FEP_pop_up_window_graphics_Line_4;
	TChinese_FEP_pop_up_window_graphics_Line_5_sig* Chinese_FEP_pop_up_window_graphics_Line_5;
	TChinese_FEP_pop_up_window_graphics_Limits_sig* Chinese_FEP_pop_up_window_graphics_Limits;
	TChinese_FEP_pop_up_window_graphics_sig* Chinese_FEP_pop_up_window_graphics;
	TChinese_FEP_highlight_elements_Line_1_sig* Chinese_FEP_highlight_elements_Line_1;
	TChinese_FEP_highlight_elements_Line_2_sig* Chinese_FEP_highlight_elements_Line_2;
	TChinese_FEP_highlight_elements_Line_3_sig* Chinese_FEP_highlight_elements_Line_3;
	TChinese_FEP_highlight_elements_Limits_sig* Chinese_FEP_highlight_elements_Limits;
	TChinese_FEP_highlight_elements_sig* Chinese_FEP_highlight_elements;
	TChinese_FEP_highlight_texts_Line_1_sig* Chinese_FEP_highlight_texts_Line_1;
	TUnselected_string_highlight_Line_1_sig* Unselected_string_highlight_Line_1;
	Tlist_single_fep_china_pinyin_pane_sig* list_single_fep_china_pinyin_pane;
	TList_pane_texts__fep_china__Line_1_sig* List_pane_texts__fep_china__Line_1;
	TPinyin_T9_candidate_pop_up_window_graphics_Line_1_sig* Pinyin_T9_candidate_pop_up_window_graphics_Line_1;
	TPinyin_T9_candidate_pop_up_window_graphics_Line_2_sig* Pinyin_T9_candidate_pop_up_window_graphics_Line_2;
	TPinyin_T9_candidate_pop_up_window_graphics_Line_3_sig* Pinyin_T9_candidate_pop_up_window_graphics_Line_3;
	TPinyin_T9_candidate_pop_up_window_graphics_Line_4_sig* Pinyin_T9_candidate_pop_up_window_graphics_Line_4;
	TPinyin_T9_candidate_pop_up_window_graphics_Limits_sig* Pinyin_T9_candidate_pop_up_window_graphics_Limits;
	TPinyin_T9_candidate_pop_up_window_graphics_sig* Pinyin_T9_candidate_pop_up_window_graphics;
	TPinyin_T9_candidate_highlight_Line_1_sig* Pinyin_T9_candidate_highlight_Line_1;
	Tpopup_grid_apac_character_window_sig* popup_grid_apac_character_window;
	Tpopup_fep_japan_predictive_window_sig* popup_fep_japan_predictive_window;
	Tpopup_fep_japan_candidate_window_sig* popup_fep_japan_candidate_window;
	Tcandidate_pane_sig* candidate_pane;
	Tlist_single_popup_jap_candidate_pane_sig* list_single_popup_jap_candidate_pane;
	TList_pane_text__single_japan_fep__Line_1_sig* List_pane_text__single_japan_fep__Line_1;
	TPredictive_candidate_selection_list_texts_Line_1_sig* Predictive_candidate_selection_list_texts_Line_1;
	TMultiline_Predictive_candidate_selection_list_texts_Line_1_sig* Multiline_Predictive_candidate_selection_list_texts_Line_1;
	TPredictive_candidate_selection_highlight_Line_1_sig* Predictive_candidate_selection_highlight_Line_1;
	TPredictive_candidate_selection_popup_window_graphics_Line_1_sig* Predictive_candidate_selection_popup_window_graphics_Line_1;
	TPredictive_candidate_selection_popup_window_graphics_Line_2_sig* Predictive_candidate_selection_popup_window_graphics_Line_2;
	TPredictive_candidate_selection_popup_window_graphics_Line_3_sig* Predictive_candidate_selection_popup_window_graphics_Line_3;
	TPredictive_candidate_selection_popup_window_graphics_Line_4_sig* Predictive_candidate_selection_popup_window_graphics_Line_4;
	TPredictive_candidate_selection_popup_window_graphics_Limits_sig* Predictive_candidate_selection_popup_window_graphics_Limits;
	TPredictive_candidate_selection_popup_window_graphics_sig* Predictive_candidate_selection_popup_window_graphics;
	TCandidate_selection_list_texts_Line_1_sig* Candidate_selection_list_texts_Line_1;
	TCandidate_selection_pop_up_window_graphics_Line_1_sig* Candidate_selection_pop_up_window_graphics_Line_1;
	TCandidate_selection_pop_up_window_graphics_Line_2_sig* Candidate_selection_pop_up_window_graphics_Line_2;
	TCandidate_selection_pop_up_window_graphics_Line_3_sig* Candidate_selection_pop_up_window_graphics_Line_3;
	TCandidate_selection_pop_up_window_graphics_Line_4_sig* Candidate_selection_pop_up_window_graphics_Line_4;
	TCandidate_selection_pop_up_window_graphics_Limits_sig* Candidate_selection_pop_up_window_graphics_Limits;
	TCandidate_selection_pop_up_window_graphics_sig* Candidate_selection_pop_up_window_graphics;
	TChinese_FEP_Zi_popup_window_elements_and_descendants_panes_Line_1_sig* Chinese_FEP_Zi_popup_window_elements_and_descendants_panes_Line_1;
	Tfep_china_zi_entry_pane_sig* fep_china_zi_entry_pane;
	Tfep_china_zi_candidate_pane_sig* fep_china_zi_candidate_pane;
	TChinese_FEP_Zi_entry_pane_elements_Line_1_sig* Chinese_FEP_Zi_entry_pane_elements_Line_1;
	TChinese_FEP_Zi_entry_pane_elements_Line_2_sig* Chinese_FEP_Zi_entry_pane_elements_Line_2;
	TChinese_FEP_Zi_entry_pane_elements_Limits_sig* Chinese_FEP_Zi_entry_pane_elements_Limits;
	TChinese_FEP_Zi_entry_pane_elements_sig* Chinese_FEP_Zi_entry_pane_elements;
	TChinese_FEP_Zi_entry_pane_texts_Line_1_sig* Chinese_FEP_Zi_entry_pane_texts_Line_1;
	TChinese_FEP_Zi_candidate_pane_elements_Line_1_sig* Chinese_FEP_Zi_candidate_pane_elements_Line_1;
	TChinese_FEP_Zi_candidate_pane_elements_Line_2_sig* Chinese_FEP_Zi_candidate_pane_elements_Line_2;
	TChinese_FEP_Zi_candidate_pane_elements_Line_3_sig* Chinese_FEP_Zi_candidate_pane_elements_Line_3;
	TChinese_FEP_Zi_candidate_pane_elements_Line_4_sig* Chinese_FEP_Zi_candidate_pane_elements_Line_4;
	Tfep_china_zi_highlight_pane_sig* fep_china_zi_highlight_pane;
	TChinese_FEP_Zi_candidate_pane_elements_Limits_sig* Chinese_FEP_Zi_candidate_pane_elements_Limits;
	TChinese_FEP_Zi_candidate_pane_elements_sig* Chinese_FEP_Zi_candidate_pane_elements;
	TChinese_FEP_Zi_candidate_pane_texts_Line_1_sig* Chinese_FEP_Zi_candidate_pane_texts_Line_1;
	TChinese_FEP_Zi_candidate_pane_texts_Line_2_sig* Chinese_FEP_Zi_candidate_pane_texts_Line_2;
	TChinese_FEP_Zi_candidate_pane_texts_Line_3_sig* Chinese_FEP_Zi_candidate_pane_texts_Line_3;
	TChinese_FEP_Zi_candidate_pane_texts_Limits_sig* Chinese_FEP_Zi_candidate_pane_texts_Limits;
	TChinese_FEP_Zi_candidate_pane_texts_sig* Chinese_FEP_Zi_candidate_pane_texts;
	TChinese_FEP_Zi_popup_window_graphics__part_1__Line_1_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__Line_1;
	TChinese_FEP_Zi_popup_window_graphics__part_1__Line_2_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__Line_2;
	TChinese_FEP_Zi_popup_window_graphics__part_1__Line_3_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__Line_3;
	TChinese_FEP_Zi_popup_window_graphics__part_1__Line_4_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__Line_4;
	TChinese_FEP_Zi_popup_window_graphics__part_1__Line_5_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__Line_5;
	TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_Limits_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_Limits;
	TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0;
	TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_Limits_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_Limits;
	TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_sig* Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1;
	TChinese_FEP_Zi_popup_window_graphics__part_2__Line_1_sig* Chinese_FEP_Zi_popup_window_graphics__part_2__Line_1;
	TChinese_FEP_Zi_popup_window_graphics__part_2__Line_2_sig* Chinese_FEP_Zi_popup_window_graphics__part_2__Line_2;
	TChinese_FEP_Zi_popup_window_graphics__part_2__Line_3_sig* Chinese_FEP_Zi_popup_window_graphics__part_2__Line_3;
	TChinese_FEP_Zi_popup_window_graphics__part_2__Line_4_sig* Chinese_FEP_Zi_popup_window_graphics__part_2__Line_4;
	TChinese_FEP_Zi_popup_window_graphics__part_2__Line_5_sig* Chinese_FEP_Zi_popup_window_graphics__part_2__Line_5;
	TChinese_FEP_Zi_popup_window_graphics__part_2__Limits_sig* Chinese_FEP_Zi_popup_window_graphics__part_2__Limits;
	TChinese_FEP_Zi_popup_window_graphics__part_2__sig* Chinese_FEP_Zi_popup_window_graphics__part_2_;
	TInput_highlight_elements_Line_1_sig* Input_highlight_elements_Line_1;
	TCandidate_selection_Line_1_sig* Candidate_selection_Line_1;
	TCandidate_selection_Line_2_sig* Candidate_selection_Line_2;
	TCandidate_selection_Limits_sig* Candidate_selection_Limits;
	TCandidate_selection_sig* Candidate_selection;
	Tpopup_fep_china_zi_window_sig* popup_fep_china_zi_window;
	TFind_pop_up_window_elements_Line_5_sig* Find_pop_up_window_elements_Line_5;
	TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_Line_1_sig* Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_Line_1;
	Tfep_china_uni_entry_pane_sig* fep_china_uni_entry_pane;
	Tfep_china_uni_candidate_pane_sig* fep_china_uni_candidate_pane;
	TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_Limits_sig* Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_Limits;
	TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_sig* Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0;
	TChinese_universal_FEP_entry_pane_elements_Line_1_sig* Chinese_universal_FEP_entry_pane_elements_Line_1;
	TChinese_universal_FEP_entry_pane_elements_Line_2_sig* Chinese_universal_FEP_entry_pane_elements_Line_2;
	Tfep_entry_item_pane_sig* fep_entry_item_pane;
	TChinese_universal_FEP_entry_pane_elements_Limits_sig* Chinese_universal_FEP_entry_pane_elements_Limits;
	TChinese_universal_FEP_entry_pane_elements_sig* Chinese_universal_FEP_entry_pane_elements;
	TChinese_universal_FEP_entry_pane_texts_Line_1_sig* Chinese_universal_FEP_entry_pane_texts_Line_1;
	TChinese_universal_FEPcandidate_pane_elements_Line_1_sig* Chinese_universal_FEPcandidate_pane_elements_Line_1;
	TChinese_universal_FEPcandidate_pane_elements_Line_2_sig* Chinese_universal_FEPcandidate_pane_elements_Line_2;
	TChinese_universal_FEPcandidate_pane_elements_Line_3_sig* Chinese_universal_FEPcandidate_pane_elements_Line_3;
	TChinese_universal_FEPcandidate_pane_elements_Line_4_sig* Chinese_universal_FEPcandidate_pane_elements_Line_4;
	Tfep_candidate_item_pane_sig* fep_candidate_item_pane;
	TChinese_universal_FEPcandidate_pane_elements_Limits_sig* Chinese_universal_FEPcandidate_pane_elements_Limits;
	TChinese_universal_FEPcandidate_pane_elements_sig* Chinese_universal_FEPcandidate_pane_elements;
	TChinese_universal_FEP_candidate_pane_texts_Line_1_sig* Chinese_universal_FEP_candidate_pane_texts_Line_1;
	TChinese_universal_FEP_candidate_pane_texts_Line_2_sig* Chinese_universal_FEP_candidate_pane_texts_Line_2;
	TChinese_universal_FEP_candidate_pane_texts_Line_3_sig* Chinese_universal_FEP_candidate_pane_texts_Line_3;
	TChinese_universal_FEP_candidate_pane_texts_Limits_sig* Chinese_universal_FEP_candidate_pane_texts_Limits;
	TChinese_universal_FEP_candidate_pane_texts_sig* Chinese_universal_FEP_candidate_pane_texts;
	TChinese_universal_FEP_pop_up_window_graphics_Line_1_sig* Chinese_universal_FEP_pop_up_window_graphics_Line_1;
	TChinese_universal_FEP_pop_up_window_graphics_Line_2_sig* Chinese_universal_FEP_pop_up_window_graphics_Line_2;
	TChinese_universal_FEP_pop_up_window_graphics_Line_3_sig* Chinese_universal_FEP_pop_up_window_graphics_Line_3;
	TChinese_universal_FEP_pop_up_window_graphics_Line_4_sig* Chinese_universal_FEP_pop_up_window_graphics_Line_4;
	TChinese_universal_FEP_pop_up_window_graphics_Limits_sig* Chinese_universal_FEP_pop_up_window_graphics_Limits;
	TChinese_universal_FEP_pop_up_window_graphics_sig* Chinese_universal_FEP_pop_up_window_graphics;
	TInput_highlight_Line_1_sig* Input_highlight_Line_1;
	TCandidate_selection_highlight_Line_1_sig* Candidate_selection_highlight_Line_1;
	TCandidate_selection_highlight_Line_2_sig* Candidate_selection_highlight_Line_2;
	TCandidate_selection_highlight_Limits_sig* Candidate_selection_highlight_Limits;
	TCandidate_selection_highlight_sig* Candidate_selection_highlight;
	Tpopup_fep_china_uni_window_sig* popup_fep_china_uni_window;
	};
#ifdef __WINS__
struct SCdlImpl
	{
	SCdlImpl0 i0;
	};
#endif

} // end of namespace AknApacLayout
#endif // AKNAPACLAYOUT_CDL_CUSTOM_H
