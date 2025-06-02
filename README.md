# flam-assignment
Android assignment for android role at Flam

Weather app:
The WeatherTrack application is a weather forecasting tool built using HTML, CSS, and JavaScript. Its structure is defined in the HTML file, which includes a heading and a main weather card component. This component contains an input box for the user to type in a city name, a "Search" button to fetch the weather for that city, and a "Use current location" button that utilizes the browser’s geolocation feature. Below these controls, the interface displays the current weather and a three-day weather forecast in neatly styled weather cards.
The styling of the app is handled in the CSS file, which gives the application a clean and structured layout. It uses Flexbox to align elements and includes styles for input fields, buttons, the weather display section, and the forecast cards. The background, border, font, and spacing are all designed to offer a visually appealing user experience.
Functionality is powered by JavaScript. It begins by selecting important DOM elements such as the input box, buttons, and weather display areas. The API_KEY constant holds the OpenWeatherMap API key, which is used to make requests to the API. The core logic revolves around several key functions. The createWeatherCard function generates the HTML content dynamically to display weather data, both for the current day and upcoming forecasts, including temperature, wind speed, humidity, and an icon representing weather conditions.
When a user enters a city name and clicks "Search", the getCityCoordinates function calls the OpenWeatherMap Geocoding API to retrieve the latitude and longitude of that city. These coordinates are then passed to getWeatherDetails, which calls the Forecast API to retrieve weather data. This data is filtered to extract four unique days (today plus the next three) and then displayed in the appropriate sections of the page.
Alternatively, if the user clicks "Use current location", the getUserCoordinates function accesses the browser’s geolocation feature to get the user's current coordinates. These are used to perform reverse geocoding to find the city name, and then the weather data is fetched in the same way as for a searched city.
In summary, this project effectively combines user interface design with asynchronous API interaction to provide a functional and interactive weather forecasting app. The HTML handles structure, CSS handles appearance, and JavaScript connects everything dynamically with real-time weather data from OpenWeatherMap.

firstQuestion:

