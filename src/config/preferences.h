/*
 * preferences.h
 *
 * Copyright (C) 2012, 2013 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PREFERENCES_H
#define PREFERENCES_H

#include "config.h"

#include <glib.h>
#ifdef HAVE_NCURSESW_NCURSES_H
#include <ncursesw/ncurses.h>
#elif HAVE_NCURSES_H
#include <ncurses.h>
#endif

#define PREFS_MIN_LOG_SIZE 64
#define PREFS_MAX_LOG_SIZE 1048580

typedef enum {
    PREF_SPLASH,
    PREF_BEEP,
    PREF_VERCHECK,
    PREF_THEME,
    PREF_TITLEBARVERSION,
    PREF_FLASH,
    PREF_INTYPE,
    PREF_HISTORY,
    PREF_MOUSE,
    PREF_STATUSES,
    PREF_STATES,
    PREF_OUTTYPE,
    PREF_NOTIFY_TYPING,
    PREF_NOTIFY_MESSAGE,
    PREF_CHLOG,
    PREF_AUTOAWAY_CHECK
} preference_t;


void prefs_load(void);
void prefs_close(void);

char * prefs_find_login(char *prefix);
void prefs_reset_login_search(void);
char * prefs_autocomplete_boolean_choice(char *prefix);
void prefs_reset_boolean_choice(void);

gint prefs_get_gone(void);
void prefs_set_gone(gint value);
gchar * prefs_get_theme(void);
void prefs_set_theme(gchar *value);

void prefs_set_notify_remind(gint period);
gint prefs_get_notify_remind(void);
void prefs_set_max_log_size(gint value);
gint prefs_get_max_log_size(void);
void prefs_set_priority(gint value);
gint prefs_get_priority(void);
void prefs_set_reconnect(gint value);
gint prefs_get_reconnect(void);
void prefs_set_autoping(gint value);
gint prefs_get_autoping(void);

gchar* prefs_get_autoaway_mode(void);
void prefs_set_autoaway_mode(gchar *value);
gint prefs_get_autoaway_time(void);
void prefs_set_autoaway_time(gint value);
gchar* prefs_get_autoaway_message(void);
void prefs_set_autoaway_message(gchar *value);

void prefs_add_login(const char *jid);

gboolean prefs_get_boolean(preference_t pref);
void prefs_set_boolean(preference_t pref, gboolean value);

#endif