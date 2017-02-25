#ifndef DEFAULTS_CSS_H
#define DEFAULTS_CSS_H

/* 
 * This file contains default variable values. To change these values use 
 * #undef + #define 
 */

/* Breakpoints */
#define SKEL_LARGER_THAN_MOBILE     min-width: 400px
#define SKEL_LARGER_THAN_PHABLET    min-width: 550px
#define SKEL_LARGER_THAN_TABLET     min-width: 750px
#define SKEL_LARGER_THAN_DESKTOP    min-width: 1000px
#define SKEL_LARGER_THAN_DESKTOPHD  min-width: 1200px

/* Colors */
#define SKEL_LIGHT_GREY             #e1e1e1
#define SKEL_LIGHTEST_GREY          #f1f1f1
#define SKEL_DARK_GREY              #333
#define SKEL_LIGHTER_GREY           #888
#define SKEL_PRIMARY_COLOR          #33c3f0
#define SKEL_PRIMARY_ACTIVE_COLOR   #1eaedb
#define SKEL_SECONDARY_COLOR        #555
#define SKEL_BORDER_COLOR           #bbb
#define SKEL_BORDER_LIGHTER_COLOR   #d1d1d1
#define SKEL_TEXT_COLOR             #222

/* Typography */
#define SKEL_FONT_FAMILY "Raleway", "HelveticaNeue", "Helvetica Neue", \
                         Helvetica, Arial, sans-serif

/* Grid Variables */
#define SKEL_CONTAINER_WIDTH                        960px
#define SKEL_CONTAINER_WIDTH_LARGER_THAN_MOBILE     85%
#define SKEL_CONTAINER_WIDTH_LARGER_THAN_PHABLET    80%

/* Misc */
#define SKEL_RADIUS 4px

#endif /* DEFAULTS_CSS_H */

