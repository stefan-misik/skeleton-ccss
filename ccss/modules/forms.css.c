/* Forms
-------------------------------------------------- */
input[type="email"],
input[type="number"],
input[type="search"],
input[type="text"],
input[type="tel"],
input[type="url"],
input[type="password"],
textarea,
select {
  height: 38px;
  padding: 6px 10px; /* The 6px vertically centers text on FF, ignored by Webkit */
  background-color: #fff;
  border: 1px solid SKEL_BORDER_LIGHTER_COLOR;
  border-radius: SKEL_RADIUS;
  box-shadow: none;
  box-sizing: border-box; }

/* Removes awkward default styles on some inputs for iOS */
input[type="email"],
input[type="number"],
input[type="search"],
input[type="text"],
input[type="tel"],
input[type="url"],
input[type="password"],
textarea {
  -webkit-appearance: none;
     -moz-appearance: none;
          appearance: none; }

textarea {
  min-height: 65px;
  padding-top: 6px;
  padding-bottom: 6px; }

input[type="email"]:focus,
input[type="number"]:focus,
input[type="search"]:focus,
input[type="text"]:focus,
input[type="tel"]:focus,
input[type="url"]:focus,
input[type="password"]:focus,
textarea:focus,
select:focus {
  border: 1px solid SKEL_PRIMARY_COLOR;
  outline: 0; }

label,
legend {
  display: block;
  margin-bottom: .5rem;
  font-weight: 600; }

fieldset {
  padding: 0;
  border-width: 0; }

input[type="checkbox"],
input[type="radio"] {
  display: inline; }

label > .label-body {
  display: inline-block;
  margin-left: .5rem;
  font-weight: normal; }