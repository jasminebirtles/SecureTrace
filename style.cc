/* Reset & Base */
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: Arial, sans-serif;
  background-color: #f5f5f5;
  color: #202020;
  line-height: 1.6;
}

/* Header */
.header {
  background-color: #000;
  padding: 16px 30px;
}

.nav {
  display: flex;
  justify-content: space-between;
  align-items: center;
}

.logo {
  height: 30px;
}

.support-btn {
  background-color: #e60000;
  color: #fff;
  padding: 10px 20px;
  border-radius: 6px;
  font-weight: bold;
  font-size: 14px;
  text-decoration: none;
  transition: background 0.3s ease;
}

.support-btn:hover {
  background-color: #b30000;
}

/* Container */
.container {
  max-width: 900px;
  background: #fff;
  margin: 40px auto;
  padding: 40px 30px;
  border-radius: 10px;
  box-shadow: 0 10px 25px rgba(0, 0, 0, 0.05);
}

.intro {
  font-size: 16px;
  margin-bottom: 30px;
  color: #444;
  text-align: center;
}

h1 {
  font-size: 26px;
  color: #e60000;
  margin-bottom: 25px;
  text-align: center;
}

h2 {
  color: #e60000;
  font-size: 20px;
  margin-top: 35px;
  margin-bottom: 10px;
}

ol, ul {
  margin-left: 20px;
  margin-bottom: 20px;
}

li {
  margin-bottom: 8px;
}

a {
  color: #1a73e8;
  text-decoration: none;
}

a:hover {
  text-decoration: underline;
}

/* CTA Button */
.cta-button {
  display: block;
  width: fit-content;
  margin: 40px auto 0;
  padding: 14px 28px;
  background-color: #e60000;
  color: #fff;
  font-size: 16px;
  font-weight: bold;
  border-radius: 8px;
  text-align: center;
  text-decoration: none;
  transition: background 0.3s ease;
}

.cta-button:hover {
  background-color: #b30000;
}
